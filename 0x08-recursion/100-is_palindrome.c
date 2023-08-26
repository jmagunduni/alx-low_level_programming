#include "main.h"

int check_pal(char *rev_string, int value, int length);

int _strlen_recursion(char *rev_string);

/**
 * is_palindrome - this function checks if a string if a string is a
 * palindrome
 * @s: this is the string to reverse
 *
 * Return: values returned :1 if it is a palindrome, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @rev_string: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *rev_string)
{
	if (*rev_string == '\0')
		return (0);

	return (1 + _strlen_recursion(rev_string + 1));
}

/**
 * check_pal - checks characters for palindrome/lm
 * @rev_string: string to check
 * @value: iterator
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *rev_string, int value, int length)
{
	if (*(rev_string + value) != *(rev_string + length - 1))
		return (0);

	if (value >= length)
		return (1);

	return (check_pal(rev_string, value + 1, length - 1));

}
