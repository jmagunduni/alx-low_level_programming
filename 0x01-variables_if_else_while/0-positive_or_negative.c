#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -this function determines if a number is positive,
 *negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int rndNum;

	/*gets the random number*/
	srand(time(0));
	rndNum = rand() - RAND_MAX / 2;

	/*check if random number is +ve /-ve*/
	if (rndNum == 0)
	{
		printf("%d is zero\n", rndNum);
	}
	else if (rndNum > 0)
	{
		printf("%d is positive\n", rndNum);
	}
	else
	{
		printf("%d is negative\n", rndNum);
	}
	return (0);
}
