set (_eval_FILES "an-side"
		 "aux-table"
		 "cg-asm"
		 "cg-bycode"
		 "cg-bycode1"
		 "cg-bycode2"
		 "cg-dld"
		 "cg-exec"
		 "cg-gen"
		 "cg-interf"
		 "cg-link"
		 "cg-stack"
		 "cg-state"
		 "eval"
		 "ex-body"
		 "ex-direct"
		 "ex-expose"
		 "ex-expr"
		 "ex-import"
		 "ex-module"
		 "ex-syntax"
		 "i-all"
		 "i-args"
		 "i-compile"
		 "i-error"
		 "i-ffi"
		 "i-level-1"
		 "i-modify"
		 "i-notify"
		 "i-param"
		 "i-rep"
		 "op-peep-r"
		 "op-peep"
		 "p-env"
		 "p-parse"
		 "p-read"
		 "sx-node"
		 "sx-obj"
		 "sx-obj1"
		 "sx-obj2"
		 "sx-write"
		 "i-aux0")

set (eval_SOURCES_EM)
set (eval_SOURCES)
foreach (FILE ${_eval_FILES})
  list (APPEND eval_SOURCES_EM "${CMAKE_CURRENT_LIST_DIR}/${FILE}.em")
  list (APPEND eval_SOURCES "${CMAKE_CURRENT_LIST_DIR}/u2/${FILE}.c")
endforeach ()
unset (_eval_FILES)

set (eval_FF_SOURCES "${CMAKE_CURRENT_LIST_DIR}/Ff/eul-prompt-string.c"
                     "${CMAKE_CURRENT_LIST_DIR}/Ff/eul-dld.c")

if (ARCH EQUAL 64)
  list (APPEND eval_FF_SOURCES
               "${CMAKE_CURRENT_LIST_DIR}/64bit/u2/cg-exec-word-length.c")
else ()
  list (APPEND eval_FF_SOURCES
               "${CMAKE_CURRENT_LIST_DIR}/32bit/u2/cg-exec-word-length.c")
endif ()


set (_main_FILES main youtoo)
set (main_SOURCES_EM)
set (main_SOURCES)
foreach (FILE ${_main_FILES})
  list (APPEND main_SOURCES_EM "${CMAKE_CURRENT_LIST_DIR}/${FILE}.em")
  list (APPEND main_SOURCES "${CMAKE_CURRENT_LIST_DIR}/u2/${FILE}.c")
endforeach ()
unset (_main_FILES)

set (main_FF_SOURCES "${CMAKE_CURRENT_LIST_DIR}/Ff/Youtoo_.c")





##
add_library (eval ${eval_SOURCES} ${eval_FF_SOURCES})
target_include_directories (eval PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library (main ${main_SOURCES} ${main_FF_SOURCES})
target_link_libraries (main PUBLIC level-0)
target_include_directories (main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
