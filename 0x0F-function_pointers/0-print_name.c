#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - this function prints the name
* using pointer to function
* @name: this is a string name
* @f: this is the pointer to the function
* Return: this sunction does not return anything
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
