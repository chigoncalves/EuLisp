#[[.rst
#
# FindReadline.cmake
# ------------------
#
# Finds Readline.
#
#
# Exports
# """""""
#
# * ``Readline_FOUND``
#        set to a *true* value if Readline was found.
#
# * ``Readline_INCLUDE_DIRS``
#        set to a list of directories where to look for include files.
#
# * ``Readline_LIBRARIES``
#        set to a list of libraries needed to link your application.
#
# * ``Readline_VERSION_STRING``
#        a string with Readline version.
#
# * ``Readline_VERSION_MAJOR``
#        Readline major version.
#
# * ``Readline_VERSION_MINOR``
#        Readline minor version.
#
# *  ``Readline_VERSION_PATCH``
#        Readline micro version.
#
#
#]]


include (SelectLibraryConfigurations)
include (FindPackageHandleStandardArgs)

include (CMakePrintHelpers)

function (_readline_find_header_dir HEADER)
  find_path (Readline_INCLUDE_DIR
             ${HEADER}
	     HINTS
	       "${Readline_ROOT_DIR}"
	       ENV Readline_ROOT_DIR
	     PATH_SUFFIXES
	       readline)

  set (Readline_INCLUDE_DIR "${Readline_INCLUDE_DIR}" PARENT_SCOPE)
endfunction ()

function (_readline_find_library NAME)

  find_library (Readline_LIBRARY_RELEASE
                NAMES ${NAME}
  	        HINTS
	          "${Readline_ROOT_DIR}"
 		ENV Readline_ROOT_DIR
		PATHS
		  /usr/lib/${CMAKE_LIBRARY_ARCHITECTURE}
		  /usr/lib64/${CMAKE_LIBRARY_ARCHITECTURE}
		  /usr/lib32/${CMAKE_LIBRARY_ARCHITECTURE})

  if  (Readline_LIBRARY_RELEASE)
    select_library_configurations (Readline)
    set (Readline_LIBRARY_RELEASE "${Readline_LIBRARY_RELEASE}" PARENT_SCOPE)
    set (Readline_LIBRARY "${Readline_LIBRARY}" PARENT_SCOPE)
  endif ()
endfunction ()

function (_readline_find_version HEADER_FILE MACRO_NAME)
  file (STRINGS "${HEADER_FILE}" _VERSION
        REGEX "#define[\t ]+${MACRO_NAME}[\t ]+[0-9]+")

  if (_VERSION)
    string (REGEX REPLACE
            ".*#define[\t ]+${MACRO_NAME}[\t ]+([0-9]+).*"
            "\\1" _VERSION_VALUE "${_VERSION}")
    if ("${_VERSION}" STREQUAL "${_VERSION_VALUE}")
      set (_VERSION_FOUND 0 PARENT_SCOPE)
    else ()
      set (_VERSION_FOUND 1 PARENT_SCOPE)
      set (_VERSION "${_VERSION_VALUE}" PARENT_SCOPE)
    endif ()
  else ()
    set (_VERSION_FOUND 0 PARENT_SCOPE)
  endif ()
endfunction ()


##### Entry Point #####

set (Readline_FOUND)
set (Readline_INCLUDE_DIRS)
set (Readline_LIBRARIES)
set (Readline_VERSION_STRING)
set (Readline_VERSION_MAJOR)
set (Readline_VERSION_MINOR)
set (Readline_VERSION_PATCH)

_readline_find_header_dir (readline.h)
_readline_find_library (readline)

_readline_find_version ("${Readline_INCLUDE_DIR}/readline.h"
                        RL_VERSION_MAJOR)
if (_VERSION_FOUND)
  set (Readline_VERSION_MAJOR ${_VERSION})
endif ()

_readline_find_version ("${Readline_INCLUDE_DIR}/readline.h"
                        RL_VERSION_MINOR)
if (_VERSION_FOUND)
  set (Readline_VERSION_MINOR ${_VERSION})
endif ()

set (Readline_VERSION_PATCH 0)
set (Readline_VERSION_STRING "${Readline_VERSION_MAJOR}.\
${Readline_VERSION_MINOR}.${Readline_VERSION_PATCH}")

find_package_handle_standard_args (Readline
				   REQUIRED_VARS
				     Readline_INCLUDE_DIR
				     Readline_LIBRARY
				     Readline_LIBRARY_RELEASE
				   VERSION_VAR Readline_VERSION_STRING)

if (Readline_FOUND)
  set (Readline_INCLUDE_DIRS "${Readline_INCLUDE_DIR}")

  if (NOT TARGET Readline::Library)
    add_library (Readline::Library UNKNOWN IMPORTED)
    set_property (TARGET Readline::Library APPEND
		  PROPERTY IMPORTED_CONFIGURATIONS RELEASE)

    set_target_properties (Readline::Library
			   PROPERTIES
			     INTERFACE_INCLUDE_DIRS
			       "${Readline_INCLUDE_DIR}"
			     IMPORTED_LOCATION
				"${Readline_LIBRARY}"
			     IMPORTED_LOCATION_RELEASE
			       "${Readline_LIBRARY_RELEASE}")

    set (Readline_LIBRARIES Readline::Library)
  endif ()
endif ()

mark_as_advanced (Readline_INCLUDE_DIR
                  Readline_LIBRARY
		  Readline_LIBRARY_RELEASE)
