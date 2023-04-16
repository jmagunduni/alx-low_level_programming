#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
	int finalResult;
	int firstNumber;
	int secondNumber;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	firstNumber  = atoi(argv[1]);
	secondNumber = atoi(argv[2]);
	finalResult  = firstNumber * secondNumber;

	printf("%d\n", finalResult);

	return (0);
}
