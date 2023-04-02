#include <stdio.h>

/**
 * main - this function prints numbers between 0 to 9
 * and letters between a to f based on the ASCII table
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter;

	/*we are looping through the ASCII table*/
	for (counter = 48; counter < 58; counter++)
	{
		putchar(counter);
	}
	for (counter = 97; counter < 103; counter++)
	{
		putchar(counter);
	}
	putchar('\n');
	return (0);
}
