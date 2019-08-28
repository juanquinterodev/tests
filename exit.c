#include "prototypes.h"
/**
*  exit_func - entry point to the program.
*  @my_str: entry str.
*  Return: 0 if is sucess.
*/
int exit_func(char *my_str)
{
	if (_strcmp(my_str, "exit") == 0)
	{
		exit(0);
	}
	return (0);
}

