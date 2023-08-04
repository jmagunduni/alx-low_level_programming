#include <stdio.h>
#include "main.h"

/**
 * _putchar -  this function writes the character c
 * to stdout
 * @character:Ther character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char character)
{
return (write(1, &character, 1));
}
