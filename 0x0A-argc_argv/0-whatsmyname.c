#include <stdio.h>
#include "main.h"
/**
 * main - this function prints the name
 * of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: this function will always return 0
 *  (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
