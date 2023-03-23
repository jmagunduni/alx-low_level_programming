/**
* main- prints the n times table, starting with 0
* Description: Write a program that computes and
* prints the sum of all the multiples of 3 or 5
* below 1024 (excluded), followed by a new line
* Return: 0 ALWAYS
*/
#include <stdio.h>

int main(void)
	{
		int counter, totalSum = 0;

		for (counter = 0; counter < 1024; i++)
		{
			if ((counter % 3) == 0 || (counter % 5) == 0)
				totalSum += counter;
		}

		printf("%d\n", totalSum);

		return (0);
	}
