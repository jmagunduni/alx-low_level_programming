/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int counterj;

	counterj = 0;
	while (counterj < n && src[counterj] != '\0')
	{
		dest[counterj] = src[counterj];
		counterj++;
	}
	while (counterj < n)
	{
		dest[counterj] = '\0';
		counterj++;
	}

	return (dest);
}
