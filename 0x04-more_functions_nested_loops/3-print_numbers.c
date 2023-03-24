/**
 * print_numbers - print 0-9
 * return: void
 */

#include "main.h"

void print_numbers(void)
{
	char number;

	/*this loop first initialises the value to 0*/
	/*it also makes sure that only number less*/
	/* or equal to 9 must be prited out*/
	/*number++ tell indicate that number keep*/
	/*on increasing*/
	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
