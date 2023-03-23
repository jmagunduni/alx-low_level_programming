/**
* main- prints the fibonacci sequence starting
* with 1 and 2,separated by a comma followed
* by a space.
* Description: Write a program that prints the
* first 50 Fibonacci numbers, starting
* with 1 and 2, followed by a new line.
* Return: 0 ALWAYS
*/

#include <stdio.h>

	int main(void)
	{
		int counter;
		unsigned long fibonacci1 = 0;
		unsigned long fibonacci2 = 1;
		unsigned long totalSum;

		for (counter = 0; counter < 50; counter++)
		{
			totalSum = fibonacci1 + fibonacci2;
			printf("%lu", totalSum);

			fibonacci1 = fibonacci2;
			fibonacci2 = totalSum;

			if (counter == 49)
				printf("\n");
			else
				printf(", ");
		}

		return (0);
	}
