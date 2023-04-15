/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
#include "main.h"

char *_strchr(char *s, char c)
{
	int counteri = 0;

	for (; s[counteri] >= '\0'; counteri++)
	{
		if (s[counteri] == c)
			return (&s[counteri]);
	}
	return (0);
}
