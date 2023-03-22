/**
* _islower - checks for lowercase character
*@c: character
* Description: Write a function that
* checks for lowercase character
* Return: 0 Always
*/

#include "main.h"

	int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}

