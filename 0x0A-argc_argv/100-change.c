#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main -function to prints the minimum number of coins
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
	int enteredNumber, counter, result;

	int arrayCoins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	enteredNumber = atoi(argv[1]);
	result = 0;

	if (enteredNumber < 0)
	{
		printf("0\n");
		return (0);
	}

	for (counter = 0; counter < 5 && enteredNumber >= 0; counter++)
	{
		while (enteredNumber >= arrayCoins[counter])
		{
			result++;
			enteredNumber = enteredNumber - coins[counter];
		}
	}

	printf("%d\n", result);
	return (0);
}
