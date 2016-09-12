set (EuXLisp_LIBS -ldl -lm)

list_stringfy (EuXLisp_LIBS)

list (APPEND CMAKE_C_FLAGS -std=gnu99
                           -Wall
			   -O2
			   -fpic
			   -Wl,--export-dynamic # May Add a library?
			   -m${WORD_LENGTH}
)

list_stringfy (CMAKE_C_FLAGS)

# find_package (Readline)
