#[[.rst
#
#  [[If you want to base the EuLisp multi-threading support on a
#    foreign thread]]
#
# UI  stands for *UNIX International alias Solaris Threads*.
#
# PPCR stands for *POSIX Portable Common Runtime*.
#
# MIT stands for *MIT Pthread Library*.
#
# [[#EUL_MIT_THR_DIR]]
#
#
#]]
function (eulisp_configure_treading_library)
  if (NOT DEFINED THRTYPE)
    set (THRTYPE DEFAULT)
  endif ()

  string (TOUPPER ${THRTYPE} THRTYPE)
  set (THREAD_SUPPORTED_LIBRARIES UI PPCR MIT DEFAULT)
  list (FIND THREAD_SUPPORTED_LIBRARIES ${THRTYPE} INDEX)
  if (INDEX EQUAL -1)
    message (FATAL_ERROR "EuLisp: Invalid threading library \
\"${THRTYPE}\".")
  endif ()
endfunction ()
