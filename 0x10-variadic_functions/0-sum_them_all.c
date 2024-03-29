#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all parameter.
* @n: Number of parameters
* @...: A variable number of paramters to calculate the sum of.
*
* Return: If n == 0 - 0.
*         Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int counter;
	unsigned int totsum = 0;

	va_start(ap, n);

	for (counter = 0; counter < n; counter++)
		totsum += va_arg(ap, int);

	va_end(ap);

	return (totsum);
}
