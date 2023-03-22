/**
* _abs - calc absolute value of an integer
* @n: the intiger value
* Description: clculate absolute value of an integer
* Return: the absolute value of integer
*/

#include "main.h"

	int _abs(int n)
	{
		if (n >= 0)
		{
			return (n);
		}
		return (-n);
	}
