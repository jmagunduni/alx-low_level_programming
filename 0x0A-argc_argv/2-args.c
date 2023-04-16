/**
* main - prints all arguments
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/

#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}

	return (0);
}
