#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
* main - This function prints the
* result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int fnum, snum;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fnum     = atoi(argv[1]);
	operator = argv[2];
	snum     = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("System Error\n");
		exit(99);
	}

	if ((*operator == '/' && snum == 0) ||
	    (*operator == '%' && snum == 0))
	{
		printf("System Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(fnum, snum));

	return (0);
}
