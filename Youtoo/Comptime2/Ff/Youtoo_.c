/// Copyright (c) 1997 by A Kind & University of Bath. All rights reserved.
///-----------------------------------------------------------------------------
/// ---                 EuLisp System 'youtoo'
///-----------------------------------------------------------------------------
///  Description: C hook file of EuLisp module youtoo
///-----------------------------------------------------------------------------

#include <eulisp.h>

// Initialize module youtoo ...
extern void initialize_module_youtoo();
extern LispRef youtoo_bindings[];

// Run application youtoo ...
void run_application()
{
    // Ignore signals until system is up (see also i-rep.em)
    eul_signal_enabled = 0;

    initialize_module_youtoo();
    execute_lambda(youtoo_bindings[0]);
}

///-----------------------------------------------------------------------------