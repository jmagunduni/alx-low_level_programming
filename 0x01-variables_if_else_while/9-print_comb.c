#include <stdio.h>

/**
 * main - function prints all possible combinations
 * of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*data declaration section*/
	int valASCII;

	for (valASCII = 48; valASCII < 58; valASCII++)
	{
		putchar(valASCII);
		if (valASCII != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
