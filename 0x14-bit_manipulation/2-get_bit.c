#include "main.h"

/**
 * get_bit - this function returns the value of
 * a bit in the decimal format
 * @n: this is the number to be searched
 * @index: index of the bit value
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
