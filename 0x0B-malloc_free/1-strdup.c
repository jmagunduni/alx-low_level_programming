#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *c;
	int counter, counter2 = 0;

	if (str == NULL)
		return (NULL);
	counter = 0;
	while (str[counter] != '\0')
		counter++;

	c = malloc(sizeof(char) * (counter + 1));

	if (c == NULL)
		return (NULL);

	for (counter2 = 0; str[counter2]; counter2++)
		c[counter2] = str[counter2];

	return (c);
}
