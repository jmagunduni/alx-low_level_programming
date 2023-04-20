#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints numbers.
* @separator: String to be printed between numbers.
* @n: Number of integers passed to the function.
* @...: Variable number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
	{
		va_list nums;
		unsigned int indexCounter;


		va_start(nums, n);


		for (indexCounter = 0; indexCounter < n; indexCounter++)
		{
			printf("%d", va_arg(nums, int));


			if (indexCounter != (n - 1) && separator != NULL)
				printf("%s", separator);
		}

		printf("\n");
		va_end(nums);
	}
