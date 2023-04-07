/**
 * _memset -  write a program which will fill
 * a block of memory with a certain value
 * @s: startup address which will be used to
 * fill up the memory
 * @b: the value that I woul like to fill
 * the memory with
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	int counter;

	for (counter = 0; n > 0; counter++)
	{
		s[counter] = b;
		n--;
	}
	return (s);
}
