#include <stdio.h>

/**
 * main - Prints the alphabet from an array list
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabetList[26] = "abcdefghijklmnopqrstuvwxyz";
	int counter;

	for (counter = 0; counter < 26; i++)
	{
		putchar(alphabetList[counter]);
	}
	putchar('\n');
	return (0);
}
