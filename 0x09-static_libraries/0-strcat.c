#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int counteri;
	int counterj;

	counteri = 0;
	while (dest[counteri] != '\0')
	{
		counteri++;
	}
	counterj = 0;
	while (src[counterj] != '\0')
	{
		dest[counteri] = src[counterj];
		counteri++;
		counterj++;
	}

	dest[counteri] = '\0';
	return (dest);
}
