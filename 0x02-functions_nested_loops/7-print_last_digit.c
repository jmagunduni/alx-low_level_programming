/**
* print_last_digit- prints last digit
* @n: the intiger value
* Description: Write a function that prints the
* last digit of a number.
* Return: Returns the value of the last digit
*/

#include "main.h"

int print_last_digit(int n)
{
	int modvalue;

	if (n < 0)
		n = -n;

	modvalue = n % 10;

	if (modvalue < 0)
		modvalue = -modvalue;

	_putchar(modvalue + '0');

	return (modvalue);
}

