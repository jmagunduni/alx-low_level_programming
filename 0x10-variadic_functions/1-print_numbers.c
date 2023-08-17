#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this function prints number 
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vanums;
	unsigned int counter;

	va_start(vanums, n);

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(vanums, int));

		if (counter != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(vanums);
}
