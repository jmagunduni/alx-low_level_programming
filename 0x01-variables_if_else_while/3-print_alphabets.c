#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*data declaration section*/
	/*array of all alphabets including process*/
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int counter;

	for (counter = 0; counter < 52; counter++)
	{
		putchar(alp[counter]);
	}
	putchar('\n');
	return (0);
}
