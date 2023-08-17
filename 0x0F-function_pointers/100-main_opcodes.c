#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int numbytes;
	int counter;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numbytes = atoi(argv[1]);

	if (numbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (counter = 0; counter < numbytes; counter++)
	{
		if (counter == numbytes - 1)
		{
			printf("%02hhx\n", array[counter]);
			break;
		}
		printf("%02hhx ", array[counter]);
	}
	return (0);
}
