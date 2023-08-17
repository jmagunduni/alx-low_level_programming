#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - this functions prints each
 * array element of a new line
 * @array: the actual array
 * @size: number of elements to print
 * @action: pointer to print in regular or hex
 * Return: this function does not return anything
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
