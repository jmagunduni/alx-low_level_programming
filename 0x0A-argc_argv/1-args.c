#include <stdio.h>
#include "main.h"

/**
 * main - the function will print the number of
 * arguments passed to the program
 * @argc: list number of arguments
 * @argv: chapture an array of arguments
 *
 * Return: function will always return 0
 * Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
