link_libraries (${GC_LIBRARIES} ${Readline_LIBRARIES})
include_directories ("${GC_INCLUDE_DIRS}" "${Readline_LIBRARIES}")

set (euxlisp_LIBS -ldl -lm)

list_stringfy (euxlisp_LIBS)
if (GCC OR CLANG)
  list (APPEND CMAKE_C_FLAGS -std=gnu99
			     -Wall
			     -O2
			     -fpic
			     -Wl,--export-dynamic
			     -m${WORD_LENGTH})
endif ()

list_stringfy (CMAKE_C_FLAGS)
