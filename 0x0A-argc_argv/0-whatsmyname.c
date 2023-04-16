/**
* main - this function prints
* the name of the program
* @argc: enter number of args
* @argv: enter the array of agrs
*
* Return: Always 0 (Success)
*/
#include <stdio.h>
#include "main.h"

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
