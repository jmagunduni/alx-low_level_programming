#include <stdio.h>
#include "main.h"

/**
 * _atoi - this function will convert a string to an integer
 * @string: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *string)
{
	int counter, d, n, length, f, digit;

	counter = 0;
	d = 0;
	n = 0;
	length = 0;
	f = 0;
	digit = 0;

	while (string[length] != '\0')
		length++;

	while (counter < length && f == 0)
	{
		if (string[counter] == '-')
			++d;

		if (string[counter] >= '0' && string[counter] <= '9')
		{
			digit = string[counter] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (string[counter + 1] < '0' || string[counter + 1] > '9')
				break;
			f = 0;
		}
		counter++;
	}

	if (f == 0)
		return (0);

	return (n);
}
