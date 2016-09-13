if ("${CMAKE_CURRENT_BINARY_DIR}" STREQUAL
    "${CMAKE_CURRENT_SOURCE_DIR}")
  message (FATAL_ERROR [[In source builds are not allowed.
Try running `cmake' . -B<build-dir>]])
endif ()

cmake_minimum_required (VERSION 3.0)
cmake_policy (SET CMP0054 NEW)

project (eulisp LANGUAGES C)

include (CMakePrintHelpers)

set (CMAKE_INCLUDE_CURRENT_DIR ON)
list (APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake"
                               "${CMAKE_SOURCE_DIR}/cmake/modules")

include (Utils)

if (NOT DEFINED BUILD_SHARED_LIBS)
  set (BUILD_SHARED_LIBS ON)
endif ()

include (ThreadSupport)
eulisp_configure_treading_library ()

find_package (Readline REQUIRED)
find_package (GC REQUIRED)

if (Readline_FOUND)
  set (HAS_READLINE 1)
endif ()

# <= EUL_VERSION
set (eulisp_VERSION pre-0.991)

# => eulisp_DIRECTORY
set (EUL_DIR ${CMAKE_CURRENT_SOURCE_DIR})
# => eulisp_BOOT_DIRECTORY
set (EUL_BOOT_DIR "${EUL_DIR}.boot")
# youtoo_GC_DIRECTORY
set (U2_GC_DIR /usr/local)

set (eulisp_TK_VERSION 8.5) # <= EUL_TK_VERSION
set (euisp_TK_FLAGS) # <= EUL_TK_FLAGS

find_program (EMACS_PROGRAM emacs NAMES gemacs)

if (NOT EMACS_PROGRAM)
  message (FATAL_ERROR "Failed to find emacs")
endif ()

if (CMAKE_SIZEOF_VOID_P EQUAL 8)
   set (ARCH x86_64)
   set (EUL_ARCH x86_64) # => eulisp_ARCH
   set (WORD_LENGTH 64)
else ()
  set (ARCH x86)
  set (WORD_LENGTH 32)
  set (EUL_ARCH x86_64)
endif ()


if (ARCH STREQUAL x86_64)
  # add_subdirectory ()
  # add_subdirectory ()
  set (EUL_BOOT_BIN_DIR "${EUL_BOOT_DIR}/Bin.x86_64")
  set (EUL_BIN_DIR "${EUL_DIR}/Bin.x86_64")
  set (EUL_LIB_DIR "${EUL_DIR}/Lib.x86_64")
else ()
  # add_subdirectory ()
  # add_subdirectory ()
  set (EUL_BOOT_BIN_DIR "${EUL_BOOT_DIR}/Bin.x86")
  set (EUL_BIN_DIR "${EUL_DIR}/Bin.x86")
  set (EUL_LIB_DIR "${EUL_DIR}/Lib.x86")
endif ()

set (U2_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Youtuo)
set (U2_C_DIR u2)

configure_file ("${CMAKE_SOURCE_DIR}/conf.h.in"
                "${CMAKE_BINARY_DIR}/conf.h"
		@ONLY)

include_directories (${CMAKE_CURRENT_BINARY_DIR})



add_subdirectory (Youtoo)
add_subdirectory (EuXLisp)
# add_subdirectory (Eu2C)
