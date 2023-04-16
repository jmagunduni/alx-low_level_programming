/**
 * main - prints number of agrs passes in program
 * @argc: arguments
 * @argv: array
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
