#include "main.h"

/**
 * _pow_recursion - this funtion returns number to the
 * power of something
 * @amtRaise: the amount to raise
 * @power: power value
 *
 * Return: result of the power
 */
int _pow_recursion(int amtRaise, int power)
{
	if (power < 0)
		return (-1);
	if (power == 0)
		return (1);
	return (amtRaise * _pow_recursion(amtRaise, power - 1));
}
