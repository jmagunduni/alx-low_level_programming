/**
 * _strchr - this function locates a character in a string
 * @s: first occurence of a character
 * @c: in a string
 * Return: Always 0 (Success)
 */
#include "main.h"

char *_strchr(char *s, char c)
{
	int counter = 0;

	for (; s[counter] >= '\0'; i++)
	{
		if (s[counter] == c)
			return (&s[counter]);
	}
	return (0);
}
