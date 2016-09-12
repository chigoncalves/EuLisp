set (CMAKE_INCLUDE_CURRENT_DIR ON)

cmake_print_variables (BUILD_SHARED_LIBS)
if (DEFINED BUILD_SHARED_LIBS)
  set (BUILD_SHARED_LIBS ON)
endif ()

set (vm_SOURCES "${CMAKE_CURRENT_LIST_DIR}/character.c"
                "${CMAKE_CURRENT_LIST_DIR}/fpi.c"
		"${CMAKE_CURRENT_LIST_DIR}/init.c"
		"${CMAKE_CURRENT_LIST_DIR}/rl_init.c"
		"${CMAKE_CURRENT_LIST_DIR}/interpret.c"
		"${CMAKE_CURRENT_LIST_DIR}/level-1i.c"
		"${CMAKE_CURRENT_LIST_DIR}/list.c"
		"${CMAKE_CURRENT_LIST_DIR}/register.c"
		"${CMAKE_CURRENT_LIST_DIR}/stack.c"
		"${CMAKE_CURRENT_LIST_DIR}/signals.c"
		"${CMAKE_CURRENT_LIST_DIR}/table.c"
		"${CMAKE_CURRENT_LIST_DIR}/util.c")

add_library (eulvm ${vm_SOURCES})

cmake_print_variables (vm_SOURCES)
