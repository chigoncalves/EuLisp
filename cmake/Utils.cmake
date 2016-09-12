set (CMAKE_POSITION_INDEPENDENT_CODE ON)

set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTORCC ON)
set (CMAKE_AUTOUIC ON)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

macro (list_stringfy varname)
  list (REMOVE_DUPLICATES ${varname})
  string (REPLACE ";" " " ${varname} "${${varname}}")
endmacro ()

if (NOT CMAKE_BUILD_TYPE)
  set (CMAKE_BUILD_TYPE "Release")
endif ()

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
  if (CMAKE_C_COMPILER_ID STREQUAL "Clang")
    set (CLANG ON)
    if (CMAKE_C_COMPILER_VERSION VERSION_GREATER "3.3.0")
      set (COMPILER_SUPPORTS_SAN ON)
    endif ()
  elseif (CMAKE_C_COMPILER_ID STREQUAL "GNU")
    set (GNU ON)
    if (CMAKE_C_COMPILER_VERSION VERSION_GREATER "4.8.0")
      set (COMPILER_SUPPORTS_SAN ON)
    endif ()
  endif ()


  set (CMAKE_WARN_DEPRECATED ON)
  set (CMAKE_ERROR_DEPRECATED ON)
  set (CMAKE_EXPORT_COMPILE_COMMANDS ON)
  set (DEBUG 1)
  unset (NDEBUG)

  option (ENABLE_SAN "Enable sanatizers." ON)
  list (APPEND CMAKE_C_FLAGS_DEBUG -Wall -Wextra -std=c99
                                   -pedantic -Wwrite-strings)
  if (COMPILER_SUPPORTS_SAN)
    set (SAN_BLACKLIST_FILE "${CMAKE_SOURCE_DIR}/res/blacklists.txt")
    list (APPEND CMAKE_C_FLAGS_DEBUG -fPIE )
    list (APPEND CMAKE_EXE_LINKER_FLAGS_DEBUG -fno-omit-frame-pointer
                                              -pie)
    if (ENABLE_SAN)
      string (TOLOWER ${ENABLE_SAN} ENABLE_SAN)
      list (APPEND CMAKE_EXE_LINKER_FLAGS_DEBUG -pie)
    endif ()

    if (CLANG)
      list (APPEND CMAKE_C_FLAGS_DEBUG
	           -fsanitize-blacklist="${SAN_BLACKLIST_FILE}")
    endif ()

    if (${ENABLE_SAN} STREQUAL "asan" OR ${ENABLE_SAN} STREQUAL "on")
      list (APPEND CMAKE_EXE_LINKER_FLAGS_DEBUG -fsanitize=address
	                                        -fsanitize=undefined)
    elseif (${ENABLE_SAN} STREQUAL "msan")
      list (APPEND CMAKE_EXE_LINKER_FLAGS_DEBUG -fsanitize=memory)
    elseif (${ENABLE_SAN} STREQUAL "tsan")
      list (APPEND CMAKE_EXE_LINKER_FLAGS_DEBUG -fsanitize=thread)
    endif ()
  endif ()

  list_stringfy (CMAKE_C_FLAGS_DEBUG)
  list_stringfy (CMAKE_EXE_LINKER_FLAGS_DEBUG)
endif ()

mark_as_advanced (COMILER_SUPPORTS_SAN
                  CLANG GNU DEBUG)
