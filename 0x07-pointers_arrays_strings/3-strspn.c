#include "main.h"
/**
 * _strspn - Write a function that gets the
 * length of a prefix substring
 * @s:Returns the number of bytes
 * in the initial segment
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int unsignedValue = 0;
	int counter;

	while (*s)
	{
		for (counter = 0; accept[counter]; counter++)
		{
			if (*s == accept[counter])
			{
				unsignedValue++;
				break;
			}
			else if (accept[counter + 1] == '\0')
				return (unsignedValue);
		}
		s++;
	}
	return (unsignedValue);
}
