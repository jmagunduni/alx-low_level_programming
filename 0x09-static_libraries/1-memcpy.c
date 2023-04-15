/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int counterr = 0;
	int counteri = n;

	for (; counterr < counteri; counterr++)
	{
		dest[counterr] = src[counterr];
		n--;
	}
	return (dest);
}
