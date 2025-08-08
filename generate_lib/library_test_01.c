/*_____ I N C L U D E S ____________________________________________________*/
// #include <stdio.h>
// #include "r_smc_entry.h"

#include "custom_lib.h"

/*_____ D E C L A R A T I O N S ____________________________________________*/

/*_____ D E F I N I T I O N S ______________________________________________*/

/*_____ M A C R O S ________________________________________________________*/

/*_____ F U N C T I O N S __________________________________________________*/


unsigned long library_test_001(void)
{
    static unsigned long cnt = 0x1000;
	return ( cnt+= 0x100 );
}

