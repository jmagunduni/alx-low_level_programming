#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program prints the last digit of a randomly gen number
 * and checks whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = (n % 10); /*use modulas to get the last digit */

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, lastDigit);
	}

	return (0);

}
