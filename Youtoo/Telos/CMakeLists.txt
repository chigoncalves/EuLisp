set (CMAKE_INCLUDE_CURRENT_DIR ON)

set (boot_SOURCES_EM "${CMAKE_CURRENT_LIST_DIR}/boot.em"
                     "${CMAKE_CURRENT_LIST_DIR}/boot1.em")

set (boot_SOURCES "${CMAKE_CURRENT_LIST_DIR}/u2/boot.c"
                  "${CMAKE_CURRENT_LIST_DIR}/u2/boot1.c")

set (boot_MAC_SOURCES_EM "${CMAKE_CURRENT_LIST_DIR}/boot0.em")
set (boot_MAC_SOUCCES_I "${CMAKE_CURRENT_LIST_DIR}/u2/boot0.i")
set (boot_MAC_SOURCES "${CMAKE_CURRENT_LIST_DIR}/u2/boot0.c")

set (telos_SOURCES_EM "${CMAKE_CURRENT_LIST_DIR}/mop-access.em"
                      "${CMAKE_CURRENT_LIST_DIR}/mop-alloc.em"
		      "${CMAKE_CURRENT_LIST_DIR}/mop-class.em mop-defcl.em"
		      "${CMAKE_CURRENT_LIST_DIR}/mop-gf.em"
		      "${CMAKE_CURRENT_LIST_DIR}/mop-init.em"
		      "${CMAKE_CURRENT_LIST_DIR}/mop-inspect.em"
		      "${CMAKE_CURRENT_LIST_DIR}/mop-key.em"
		      "${CMAKE_CURRENT_LIST_DIR}/mop-meth.em"
		      "${CMAKE_CURRENT_LIST_DIR}/mop-prim.em"
		      "${CMAKE_CURRENT_LIST_DIR}/telos.em")

set (telos_SOURCES "${CMAKE_CURRENT_LIST_DIR}/u2/mop-access.c"
		   "${CMAKE_CURRENT_LIST_DIR}/u2/mop-alloc.c"
		   "${CMAKE_CURRENT_LIST_DIR}/u2/mop-class.c"
		   "${CMAKE_CURRENT_LIST_DIR}/u2/mop-defcl.c"
		   "${CMAKE_CURRENT_LIST_DIR}/u2/mop-gf.c"
		   "${CMAKE_CURRENT_LIST_DIR}/u2/mop-init.c"
		   "${CMAKE_CURRENT_LIST_DIR}/u2/mop-inspect.c"
		   "${CMAKE_CURRENT_LIST_DIR}/u2/mop-key.c"
		   "${CMAKE_CURRENT_LIST_DIR}/u2/mop-meth.c"
		   "${CMAKE_CURRENT_LIST_DIR}/u2/mop-prim.c"
		   "${CMAKE_CURRENT_LIST_DIR}/u2/telos.c")

list (APPEND telos_SOURCES "${boot_MAC_SOURCES}")

set (telos_MAC_SOURCES_EM "${CMAKE_CURRENT_LIST_DIR}/mop-gf0.em"
                          "${CMAKE_CURRENT_LIST_DIR}/mop-meth0.em"
			  "${CMAKE_CURRENT_LIST_DIR}/mop-defcl0.em"
			  "${CMAKE_CURRENT_LIST_DIR}/telos0.em")

set (telos_MAC_SOURCES "${CMAKE_CURRENT_LIST_DIR}/u2/mop-gf0.c"
		       "${CMAKE_CURRENT_LIST_DIR}/u2/mop-meth0.c"
		       "${CMAKE_CURRENT_LIST_DIR}/u2/mop-defcl0.c"
		       "${CMAKE_CURRENT_LIST_DIR}/u2/telos0.c")

list (APPEND telos_MACSSOURCES "${boot_MAC_SOURCES}")

add_library (boot ${boot_SOURCES})

add_library (telos ${telos_SOURCES})
