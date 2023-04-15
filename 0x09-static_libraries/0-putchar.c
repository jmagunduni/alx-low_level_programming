/**
 * _putchar - this function writes c
 * character on stdout
 * @c: captures the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}