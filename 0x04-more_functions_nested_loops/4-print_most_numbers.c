/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */

#include "main.h"


void print_most_numbers(void)
{
	char number;

	/*first make sure that you loop*/
	/*for all numbers 0-9*/
	for (number = '0'; number <= '9'; number++)
	{
		/*print out everything except 2 and 4*/
		if (!(number == '2' || number == '4'))
			_putchar(number);
	}
	_putchar('\n');
}
