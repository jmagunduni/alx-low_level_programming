#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int firstNumber;
	int secondNumber;
	char *operand;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	firstNumber  = atoi(argv[1]);
	operand      = argv[2];
	secondNumber = atoi(argv[3]);

	if (get_op_func(operand) == NULL || operand[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/*we cannot devide by zero so do validation */
	if ((*operand == '/' && secondNumber == 0) ||
	    (*operand == '%' && secondNumber == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operand)(firstNumber, secondNumber));

	return (0);
}
