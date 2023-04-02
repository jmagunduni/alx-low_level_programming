#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	/*how is it possible to loop through characters:ASCII*/
	for (character = 'z'; character >= 'a'; character--)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
