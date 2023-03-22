/**
* print_alphabet_x10 - prints 10 x alphabet
*
* Description: Write a function that prints 10
* times the alphabet, in lowercase, followed
* by a new line.
* Return: 0 Always
*/

#include "main.h"

	void print_alphabet_x10(void)
	{
		char alphabet;
		int counter;

		/*initialise the variables*/
		counter = 0;


		while (counter < 10)
		{
			alphabet = 'a';
			while (alphabet <= 'z')
			{
				_putchar(alphabet);
				alphabet++;
			}
			_putchar('\n');
			counter++;
		}
	}
