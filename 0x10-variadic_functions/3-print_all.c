#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - this function prints everything
 * @format: this is the number of  args passed to the
 * function
 */
void print_all(const char * const format, ...)
{
	int counter = 0;
	char *string;
	char *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[counter])
		{
			switch (format[counter])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", sep, string);
					break;
				default:
					counter++;
					continue;
			}
			sep = ", ";
			counter++;
		}
	}

	printf("\n");
	va_end(list);
}
