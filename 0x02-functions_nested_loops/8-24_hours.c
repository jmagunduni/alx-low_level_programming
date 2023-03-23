/**
* jack_bauer - prints every minute
* Description: Write a function that prints every
* minute of the day of Jack Bauer, starting from
* from 00:00 to 23:59.
* Return: 0 always
*/

#include "main.h"

	void jack_bauer(void)
	{
		int hour, minutes;

		hour = 0;

		while (hour < 24)
		{
			minutes = 0;
			while (minutes < 60)
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
				_putchar(':');
				_putchar((minutes / 10) + '0');
				_putchar((minutes % 10) + '0');
				_putchar('\n');
				minutes++;
			}
			hour++;
		}
	}
