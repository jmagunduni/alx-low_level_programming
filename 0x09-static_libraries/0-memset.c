/**
 * _memset - this function fills a block of memory with a
 * specific value.
 * @s: this is the starting address of the memory we are
 * going to fill
 * @b: this is a value we desire to fill in that address
 * @n: represents the number of bytes to be changed
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
