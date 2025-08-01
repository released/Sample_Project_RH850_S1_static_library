/*_____ I N C L U D E S ____________________________________________________*/
// #include <stdio.h>
// #include "r_smc_entry.h"

#include "custom_lib.h"

/*_____ D E C L A R A T I O N S ____________________________________________*/

/*_____ D E F I N I T I O N S ______________________________________________*/

/*_____ M A C R O S ________________________________________________________*/

/*_____ F U N C T I O N S __________________________________________________*/



unsigned char function_2(unsigned char a,unsigned char b)
{
	return ( (a-b)>0 ? (a-b) : (b-a));
}

unsigned char function_1(unsigned char a,unsigned char b)
{
	return (a+b);
}

