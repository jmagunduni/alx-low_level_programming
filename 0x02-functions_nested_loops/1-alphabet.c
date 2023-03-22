/**
* print_alphabet - prints alphabet
*
* Description: Write a function that prints the
* alphabet, in lowercase, followed by a new line
* Return: 0 Always
*/

#include "main.h"

	void print_alphabet(void)
	{
		char alphabet;


		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);

		_putchar('\n');
	}
