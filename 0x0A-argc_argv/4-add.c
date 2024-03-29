#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int counter;

	counter = 0;
	while (counter < strlen(str)) /*count the number of string*/

	{
		if (!isdigit(str[counter])) /*check if string was a dgt*/
		{
			return (0);
		}

		counter++;
	}
	return (1);
}

/**
 * main -  program print the name of the program
 * @argc: Count arguments * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int counter;
	int stringInt;
	int totSum = 0;

	counter = 1;
	while (counter < argc)
	{
		if (check_num(argv[counter]))

		{
			stringInt = atoi(argv[counter]); /*ATOI --> convert string to int*/
			totSum += stringInt;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		counter++;
	}

	printf("%d\n", totSum);

	return (0);
}
