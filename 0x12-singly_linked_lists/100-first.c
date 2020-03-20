#include <stdio.h>

void pbmain(void) __attribute__ ((constructor));

/**
 * pbmain - Prints before main
 */

void pbmain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
