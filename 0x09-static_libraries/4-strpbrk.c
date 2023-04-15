/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	int counter;

	while (*s)
	{
		for (counter = 0; accept[counter]; counter++)
		{
		if (*s == accept[counter])
		return (s);
		}
	s++;
	}

return ('\0');
}
