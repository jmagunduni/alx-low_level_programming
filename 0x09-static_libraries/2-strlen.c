/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
#include "main.h"

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
