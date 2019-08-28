#include "prototypes.h"
/**
 * ctrlc - Entry point of the program
 * @sig_num: Entry parameter.
 */
void ctrlc(int sig_num)
{
	(void) sig_num;
	write(1, "\n$ ", 3);
	fflush(stdout);
}
