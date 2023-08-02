#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @pointer: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *pointer)
{
	int intValue = 0;

	if (*pointer)
	{
		intValue++;
		intValue += _strlen_recursion(pointer + 1);
	}

	return (intValue);
}
