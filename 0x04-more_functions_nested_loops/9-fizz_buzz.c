/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */

#include "main.h"
#include <stdio.h>

int main(void)
{
	int number;

	/* step 1 loop though all 100 numbers*/
	for (number = 1; number <= 100; number++)
	{
		/*step 2 understand how mod statement works*/
		if (number % 3 == 0 && number % 5 != 0)
		{
			printf(" Fizz");
		} else if (number % 5 == 0 && number % 3 != 0)
		{
			printf(" Buzz");
		} else if (number % 3 == 0 && number % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (number == 1)
		{
			printf("%d", number);
		} else
		{
			printf(" %d", number);
		}
	}
	printf("\n");

	return (0);
}
