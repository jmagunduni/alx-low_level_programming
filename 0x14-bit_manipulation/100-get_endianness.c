#include "main.h"

/**
 * get_endianness - this functiion checks if a machine is little/endian
 * Return:  the fuction returns values: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int counter = 1;
	char *char_val = (char *) &counter;

	return (*char_val);
}
