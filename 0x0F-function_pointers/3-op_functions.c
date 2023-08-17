#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - adds two numbers.
* @a: Number 1.
* @b: Number 2.
*
* Return: The sum of a and b.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - calculate the difference
* of two numbers.
* @a: Number 1.
* @b: Number 2.
*
* Return: The difference of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - calculatesthe product
* of two numbers.
* @a: Number 1.
* @b: Number 2.
*
* Return: The product of a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - calculate the division
* of two numbers.
* @a: Number 1.
* @b: Number 2.
*
* Return: The quotient of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - Calculate the remainder of
* the division of two numbers.
* @a: Number 1.
* @b: Number 2.
*
* Return: The remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
	return (a % b);
}
