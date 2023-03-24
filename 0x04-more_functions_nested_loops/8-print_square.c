/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
#include "main.h"


void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		/*vLine = vertical line*/
		/*hLine = horizontal line*/
		int vLine, hLine;

		for (vLine = 0; vLine < size; vLine++)
		{
			for (hLine = 0; hLine < size; hLine++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
