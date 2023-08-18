#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - this function prints a string
 *followed by a newline
 *@separator: The is a string which is printed
 *between different words
 * @n: This is the total number of strings which
 * are passed to the function
 * @...: this is a variable of the strings to be
 *printed
 *
 * Description:  separator = NULL, no print
 *              If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_value;
	char *ptr_str;
	unsigned int counter;

	va_start(string_value, n);

	for (counter = 0; counter < n; counter++)
	{
		ptr_str = va_arg(string_value, char *);

		if (ptr_str == NULL)
			printf("(nil)");
		else
			printf("%s", string_value);

		if (counter != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string_value);
}
