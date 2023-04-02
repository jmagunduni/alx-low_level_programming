#include <stdio.h>

/**
 * main - Prints the alphabet from an array list
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*data declaration section*/
	char alphabetList[26] = "abcdefghijklmnopqrstuvwxyz";
	int counter;

	/*this loop with iterate 26 times*/
	for (counter = 0; counter < 26; i++)
	{
		/*eash alphabet with be printed from the list*/
		putchar(alphabetList[counter]);
	}
	/*this is to add a newlinee in the programs*/
	putchar('\n');
	return (0);
}
