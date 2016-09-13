include_directories ("${GC_INCLUDE_DIRS}")

set (youtoo_SOURCES "${CMAKE_CURRENT_LIST_DIR}/eul-appl.c")
set (youtoo_nogc_SOURCES "${CMAKE_CURRENT_LIST_DIR}/gc-fake.c")

link_libraries (pthread)





add_executable (youtoo ${youtoo_SOURCES})
# target_link_libraries (youtoo ${GC_LIBRARIES})
target_link_libraries (youtoo PUBLIC eulvm
main
eval
math
level-0
level-1
eval
telos
boot
eulvm
m)

add_executable (youtoo_nogc ${youtoo_SOURCES}
                            ${youtoo_nogc_SOURCES})
target_link_libraries (youtoo_nogc PUBLIC eulvm
main
eval
math
level-0
level-1
eval
telos
boot
eulvm
m)
