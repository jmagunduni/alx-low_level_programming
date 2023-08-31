#include "main.h"

/**
 * binary_to_uint - this function converts binary numbers
 * to the unsigned integers
 * @b: string  passed to the function
 *
 * Return: converted value
 */
unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);

	for (counter = 0; b[counter]; counter++)
	{
		if (b[counter] < '0' || b[counter] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[counter] - '0');
	}

	return (decimal_val);
}
