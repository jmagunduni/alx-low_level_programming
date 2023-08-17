#include "function_pointers.h"
/**
 * int_index - return index if the comparison is true
 * otherwise the function returns -1
 * @array: this is the array to be evaluated
 * @size: the size of the elements in the array
 * @cmp: pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]))
			return (counter);
	}
	return (-1);
}
