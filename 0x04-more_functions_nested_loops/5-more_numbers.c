/**
 * more_numbers - print more numbers
 */

#include "main.h"

void more_numbers(void)
{
	int line, number;

	/*first loop ensure that we print 10 lines*/
	for (line = 1; line <= 10; line++)
	{
		/*second loop ensures that we print numbers 1-14*/
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
				/*_putchar only takes 1 character hence we hve*/
				/*added 1 for number greater than 10*/
				_putchar('1');
			_putchar (number % 10 + '0');
		}
		_putchar('\n');
	}
}
