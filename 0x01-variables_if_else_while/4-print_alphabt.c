#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter;

	/*exclude 101 and 97 from the list*/
	for (counter = 97; counter < 123; counter++)
	{
		if (counter != 101 && counter != 113)
		{
			putchar(counter);
		}
	}
	putchar('\n');
	return (0);
}
