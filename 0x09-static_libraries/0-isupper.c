/**
 * _isupper - this fucntion checks for
 * uppercase letters
 * @c: defines the character to be
 * checked
 *
 * Return: 0 or 1
 */
#include "main.h"

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
