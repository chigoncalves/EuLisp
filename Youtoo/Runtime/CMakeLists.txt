set (level_0_SOURCES_I "${CMAKE_CURRENT_LIST_DIR}/liblevel-0.i")
set (level_1_SOURCES_I "${CMAKE_CURRENT_LIST_DIR}/liblevel-1.i")
set (math_SOURCES_I "${CMAKE_CURRENT_LIST_DIR}/libmath.i")
set (telos_SOURCES_I "${CMAKE_CURRENT_LIST_DIR}/liblevel-0.i")

set (level_n_SOURCES_EM "${CMAKE_CURRENT_LIST_DIR}/bit.em"
			"${CMAKE_CURRENT_LIST_DIR}/callback.em"
			"${CMAKE_CURRENT_LIST_DIR}/character.em"
			"${CMAKE_CURRENT_LIST_DIR}/collect.em"
			"${CMAKE_CURRENT_LIST_DIR}/compare.em"
			"${CMAKE_CURRENT_LIST_DIR}/condition.em"
			"${CMAKE_CURRENT_LIST_DIR}/convert.em"
			"${CMAKE_CURRENT_LIST_DIR}/convert1.em"
			"${CMAKE_CURRENT_LIST_DIR}/copy.em"
			"${CMAKE_CURRENT_LIST_DIR}/double.em"
			"${CMAKE_CURRENT_LIST_DIR}/double1.em"
			"${CMAKE_CURRENT_LIST_DIR}/dynamic.em"
			"${CMAKE_CURRENT_LIST_DIR}/event.em"
			"${CMAKE_CURRENT_LIST_DIR}/float.em"
			"${CMAKE_CURRENT_LIST_DIR}/format.em"
			"${CMAKE_CURRENT_LIST_DIR}/fpi.em"
			"${CMAKE_CURRENT_LIST_DIR}/handler.em"
			"${CMAKE_CURRENT_LIST_DIR}/integer.em"
			"${CMAKE_CURRENT_LIST_DIR}/list.em"
			"${CMAKE_CURRENT_LIST_DIR}/lock.em"
			"${CMAKE_CURRENT_LIST_DIR}/math.em"
			"${CMAKE_CURRENT_LIST_DIR}/number.em"
			"${CMAKE_CURRENT_LIST_DIR}/random.em"
			"${CMAKE_CURRENT_LIST_DIR}/read.em"
			"${CMAKE_CURRENT_LIST_DIR}/socket.em"
			"${CMAKE_CURRENT_LIST_DIR}/stream.em"
			"${CMAKE_CURRENT_LIST_DIR}/stream1.em"
			"${CMAKE_CURRENT_LIST_DIR}/stream2.em"
			"${CMAKE_CURRENT_LIST_DIR}/stream3.em"
			"${CMAKE_CURRENT_LIST_DIR}/string.em"
			"${CMAKE_CURRENT_LIST_DIR}/symbol.em"
			"${CMAKE_CURRENT_LIST_DIR}/table.em"
			"${CMAKE_CURRENT_LIST_DIR}/table1.em"
			"${CMAKE_CURRENT_LIST_DIR}/let-cc.em"
			"${CMAKE_CURRENT_LIST_DIR}/thread.em"
			"${CMAKE_CURRENT_LIST_DIR}/vector.em")

set (level_n_SOURCES "${CMAKE_CURRENT_LIST_DIR}/u2/bit.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/callback.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/character.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/collect.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/compare.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/condition.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/convert.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/convert1.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/copy.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/double.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/double1.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/dynamic.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/event.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/float.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/format.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/fpi.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/handler.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/integer.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/list.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/lock.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/math.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/number.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/random.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/read.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/socket.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/stream.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/stream1.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/stream2.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/stream3.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/string.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/symbol.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/table.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/table1.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/let-cc.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/thread.c"
		     "${CMAKE_CURRENT_LIST_DIR}/u2/vector.c")

set (level_0_SOURCES_EM "${CMAKE_CURRENT_LIST_DIR}/level-0.em"
                        ${level_n_SOURCES_EM})

set (level_0_SOURCES "${CMAKE_CURRENT_LIST_DIR}/u2/level-0.c")

set (level_0_FF_SOURCES "${CMAKE_CURRENT_LIST_DIR}/Ff/eul-ext.c"
			"${CMAKE_CURRENT_LIST_DIR}/Ff/eul-ntok.c"
			"${CMAKE_CURRENT_LIST_DIR}/Ff/eul-read.c"
			"${CMAKE_CURRENT_LIST_DIR}/Ff/eul-sock.c")

set (level_0_MAC_SOURCES_EM "${CMAKE_CURRENT_LIST_DIR}/stream0.em"
			    "${CMAKE_CURRENT_LIST_DIR}/syntax-1.em syntax-0.em")

set (level_0_MAC_SOURCES "${CMAKE_CURRENT_LIST_DIR}/u2/stream0.c"
			 "${CMAKE_CURRENT_LIST_DIR}/u2/syntax-1.c syntax-0.c")

set (level_1_SOURCES_EM "${CMAKE_CURRENT_LIST_DIR}/level-1.em"
                        ${level_n_SOURCES_EM})

set (level_0_SOURCES "${CMAKE_CURRENT_LIST_DIR}/u2/level-0.c")

set (math_SOURCES_EM "${CMAKE_CURRENT_LIST_DIR}/double1.em"
		     "${CMAKE_CURRENT_LIST_DIR}/double.em"
		     "${CMAKE_CURRENT_LIST_DIR}/math.em")

set (math_SOURCES "${CMAKE_CURRENT_LIST_DIR}/u2/double1.c"
		  "${CMAKE_CURRENT_LIST_DIR}/u2/double.c"
		  "${CMAKE_CURRENT_LIST_DIR}/u2/math.c")

set (math_FF_SOURCES "${CMAKE_CURRENT_LIST_DIR}/Ff/eul-dbl.c")



## Build.
add_library (level-0 ${level_0_SOURCES}
                     ${level_n_SOURCES}
		     ${level_0_FF_SOURCES})

add_library (level-1 ${level_1_SOURCES}
                     ${level_n_SOURCES}
		     ${level_0_FF_SOURCES})

add_library (math ${math_SOURCES} ${math_FF_SOURCES})
