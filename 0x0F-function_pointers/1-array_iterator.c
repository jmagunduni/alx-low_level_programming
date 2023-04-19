#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Write a function that executes a
 * function given as a parameter on each element of an array
 * @array: array
 * @size:number of elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	if (array == NULL || action == NULL)
		return;

	for (counter = 0; counter < size; counter++)
	{
		action(array[counter]);
	}
}
