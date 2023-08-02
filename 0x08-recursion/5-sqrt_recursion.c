#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns squareroot amount
 * @squareRoot: square root value
 *
 * Return: the resulting square root amount
 */
int _sqrt_recursion(int squareRoot)
{
	if (squareRoot < 0)
		return (-1);
	return (actual_sqrt_recursion(squareRoot, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @squareRoot: number to calculate the sqaure root of
 * @iteratorVal: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int squareRoot, int iteratorVal)
{
	if (iteratorVal * iteratorVal > squareRoot)
		return (-1);
	if (iteratorVal * iteratorVal == squareRoot)
		return (iteratorVal);
	return (actual_sqrt_recursion(squareRoot, iteratorVal + 1));
}
