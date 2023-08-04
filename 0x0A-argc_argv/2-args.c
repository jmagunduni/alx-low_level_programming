#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: display number of arguments
 * @argv: display array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}

	return (0);
}
