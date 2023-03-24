/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 * Description: checks whether the value
 * is a number check the ASCII value chart
 * for more
 * Return: 0 or 1
 */

#include "main.h"

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
