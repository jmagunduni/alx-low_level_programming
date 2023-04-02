#include <stdio.h>

/**
 * main - write a program which prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*data declaration section*/
	int counter;

	/*this program will loop from 0 - 9 exclu 10*/
	for (counter = 0; counter < 10; counter++)
	{
		printf("%d", counter);
	}
	putchar('\n');
	return (0);
}
