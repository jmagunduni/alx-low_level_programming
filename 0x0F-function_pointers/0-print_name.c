/**
 * print_name - Write a function that prints a name
 * @name: enter name
 * @f: pointer to function
 * Return: nothing
 **/
#include "function_pointers.h"
#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
