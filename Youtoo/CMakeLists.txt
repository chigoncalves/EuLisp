if (GCC OR CLANG)
  list (APPEND CMAKE_C_FLAGS -std=gnu99
			     -Wall
			     -Wno-sequence-point
			     -fPIC
			     -O2
			     -fno-strict-aliasing)
endif ()

list_stringfy (CMAKE_C_FLAGS)

include_directories ("${CMAKE_CURRENT_LIST_DIR}/include"
                     "${CMAKE_CURRENT_LIST_DIR}/Vm")

# -> U2_LIBS
set (youtoo_LIBS -lmain
                 -leval
		 -lmath
		 -llevel-0
		 -llevel-1
		 -leval
		 -ltelos
		 -llboot
		 -leulvm
		 -lm)

list_stringfy (youtoo_LIBS)

add_subdirectory (Vm)
add_subdirectory (Telos)
add_subdirectory (Runtime)
add_subdirectory (Comptime2)
add_subdirectory (Youtoo)
