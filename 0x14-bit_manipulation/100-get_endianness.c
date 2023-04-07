#include "main.h"
/**
 * get_endianess - function checks endianess
 * 
 * Returns: nothing
 */
int get_endianess(void)
{
	int num = 1;
	char* ptr = (char*) & num;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
