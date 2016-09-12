#[[.rst
#
# FindGC.cmake
# ------------
#
# Finds Boehm garbage collector.
#
# Exports
# """""""
#
# * ``GC_FOUND``
#        set to a ``true` value if GC was found.
#
# * ``GC_INCLUDE_DIRS``
#        set to list of directories where to look for
#        header files.
#
# * ``GC_LIBRARIES``
#        a list of libraries need to link your application.
#
# * ``GC_VERSION_STRING``
#        exported with GC's version as a string.
#
# * ``GC_VERSION_MAJOR``
#        exported with GC's major version.
#
# * ``GC_VERSION_MINOR``
#        exported with GC's minor version.
#
# * ``GC_VERSION_PATCH``
#        exported with GC's micro version.
#
#
#]]


#[[.rst
#
# Copyright © 2016, Edelcides Gonçalves <eatg75 |0x40| gmail>
#
# Permission to use, copy, modify, and/or distribute this software for
# any purpose with or without fee is hereby granted, provided that the
# above copyright notice and this permission notice appear in all
# copies.
#
# *THE SOFTWARE IS PROVIDED* **AS IS** *AND ISC DISCLAIMS ALL
# WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL ISC BE
# LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES
# OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
# PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
# TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
# PERFORMANCE OF THIS SOFTWARE*.
#
# This file is not part of CMake
#
#]]


include (SelectLibraryConfigurations)
include (FindPackageHandleStandardArgs)


function (_gc_find_header_dir HEADER)
  find_path (GC_INCLUDE_DIR
             ${HEADER}
	     HINTS
	       "${GC_ROOT_DIR}"
	       ENV GC_ROOT_DIR
	     PATH_SUFFIXES
	       GC gc)

  set (GC_INCLUDE_DIR "${GC_INCLUDE_DIR}" PARENT_SCOPE)
endfunction ()

function (_gc_find_library NAME)

  find_library (GC_LIBRARY_RELEASE
                NAMES ${NAME}
  	        HINTS
	          "${GC_ROOT_DIR}"
 		ENV GC_ROOT_DIR
		PATHS
		  /usr/lib/${CMAKE_LIBRARY_ARCHITECTURE}
		  /usr/lib64/${CMAKE_LIBRARY_ARCHITECTURE}
		  /usr/lib32/${CMAKE_LIBRARY_ARCHITECTURE})

  if  (GC_LIBRARY_RELEASE)
    select_library_configurations (GC)
    set (GC_LIBRARY_RELEASE "${GC_LIBRARY_RELEASE}" PARENT_SCOPE)
    set (GC_LIBRARY "${GC_LIBRARY}" PARENT_SCOPE)
  endif ()
endfunction ()

function (_gc_find_version HEADER_FILE MACRO_NAME)
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

set (GC_FOUND)
set (GC_INCLUDE_DIRS)
set (GC_LIBRARIES)
set (GC_VERSION)


_gc_find_header_dir (gc.h)
_gc_find_library (gc)

_gc_find_version ("${GC_INCLUDE_DIR}/gc_version.h"
                  GC_TMP_VERSION_MAJOR)
if (_VERSION_FOUND)
  set (GC_VERSION_MAJOR ${_VERSION})
endif ()

_gc_find_version ("${GC_INCLUDE_DIR}/gc_version.h"
                  GC_TMP_VERSION_MINOR)
if (_VERSION_FOUND)
  set (GC_VERSION_MINOR ${_VERSION})
endif ()

_gc_find_version ("${GC_INCLUDE_DIR}/gc_version.h"
                  GC_TMP_VERSION_MICRO)
if (_VERSION_FOUND)
  set (GC_VERSION_PATCH ${_VERSION})
endif ()
unset (_VERSION_FOUND)
unset (_VERSION)

set (GC_VERSION_STRING "${GC_VERSION_MAJOR}.${GC_VERSION_MINOR}.\
${GC_VERSION_PATCH}")

find_package_handle_standard_args (GC
				   REQUIRED_VARS
				     GC_INCLUDE_DIR
				     GC_LIBRARY
				     GC_LIBRARY_RELEASE
				   VERSION_VAR GC_VERSION_STRING)

if (GC_FOUND)
  set (GC_INCLUDE_DIRS "${GC_INCLUDE_DIR}")

  if (NOT TARGET GC::Library)
    add_library (GC::Library UNKNOWN IMPORTED)
    set_property (TARGET GC::Library APPEND
		  PROPERTY IMPORTED_CONFIGURATIONS RELEASE)

    set_target_properties (GC::Library
			   PROPERTIES
			     INTERFACE_INCLUDE_DIRS
			       "${GC_INCLUDE_DIR}"
			     IMPORTED_LOCATION
				"${GC_LIBRARY}"
			     IMPORTED_LOCATION_RELEASE
			       "${GC_LIBRARY_RELEASE}")

    set (GC_LIBRARIES GC::Library)
  endif ()
endif ()

mark_as_advanced (GC_INCLUDE_DIR GC_LIBRARY GC_LIBRARY_RELEASE)
