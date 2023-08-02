#include "main.h"
/**
 * _print_rev_recursion - reverse the string
 * @pointer: The string value to be reveersed
 */
void _print_rev_recursion(char *pointer)
{
	if (*pointer)
	{
		_print_rev_recursion(pointer + 1);
		_putchar(*pointer);
	}
}
