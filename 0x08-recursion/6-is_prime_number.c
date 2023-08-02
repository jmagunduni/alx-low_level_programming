#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @numVal: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int numVal)
{
	if (numVal <= 1)
		return (0);
	return (actual_prime(numVal, numVal - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @numVal: number to evaluate
 * @iterator: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int numVal, int iterator)
{
	if (iterator == 1)
		return (1);
	if (numVal % iterator == 0 && iterator > 0)
		return (0);
	return (actual_prime(numVal, iterator - 1));
}
