#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Addition
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	int firstNumber, secondNumber, addedValue;

	firstNumber  = a;
	secondNumber = b;
	addedValue   = firstNumber + secondNumber;

	return (addedValue);
}
/**
 * op_sub - Subtraction
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	int firstNumber, secondNumber, subtractedVal;

	firstNumber   = a;
	secondNumber  = b;
	subtractedVal = firstNumber - secondNumber;
	return (subtractedVal);
}
/**
 * op_mul - Multiplication
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	int firstNumber, secondNumber, multipliedVal;

	firstNumber  = a;
	secondNumber = b;

	multipliedVal = firstNumber * secondNumber;
	return (multipliedVal);
}
/**
 * op_div - Divition
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	int firstNumber, secondNumber;

	firstNumber  = a;
	secondNumber = b;

	return (firstNumber / secondNumber);
}
/**
 * op_mod - Mod.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	int firstNumber, secondNumber;

	firstNumber  = a;
	secondNumber = b;

	return (firstNumber % secondNumber);
}
