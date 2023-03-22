/**
* _isalpha - checks for alphabetic character.
* @c: alphabet character
* Return: Returns 1 if c is a letter, lowercase or uppercase
* Returns 0 otherwise
*/

#include "main.h"

	int _isalpha(int c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}

