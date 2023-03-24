/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
#include "main.h"

void print_line(int n)
{
	/* if user captures a negative value*/
	/* do not print anything on the terminal*/
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int line;

		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
