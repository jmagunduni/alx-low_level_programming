/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int counteri;
	int counterj;

	counteri = 0;
	while (dest[counteri] != '\0')
	{
		counteri++;
	}
	counterj = 0;
	while (counterj < n && src[counterj] != '\0')
	{
	dest[counteri] = src[counterj];
	counteri++;
	counterj++;
	}
	dest[counteri] = '\0';
	return (dest);
}
