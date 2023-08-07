#include <stdio.h>
#include "main.h"

/**
 * _atoi - this function converts string
 * to integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int counter, j, k, length, f, digit;

	counter = 0;
	j = 0;
	k = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[length] != '\0')
		len++;

	while (counter < length && f == 0)
	{
		if (s[counter] == '-')
			++j;

		if (s[counter] >= '0' && s[counter] <= '9')
		{
			digit = s[counter] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			f = 1;
			if (s[counter + 1] < '0' || s[counter + 1] > '9')
				break;
			f = 0;
		}
		counter++;
	}

	if (f == 0)
		return (0);

	return (k);
}

/**
 * main - function multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int product, number1, number2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = _atoi(argv[1]);
	number2 = _atoi(argv[2]);
	product = number1 * number2;

	printf("%d\n", product);

	return (0);
}
