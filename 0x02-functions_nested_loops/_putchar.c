#include "main.h"
#include <unistd.h>
	/**
	 * _putchar - prints _putchar, followed by a new line
	 * @character: takes 1 charater at a time
	 * Description: TWrite a program that
	 * prints _putchar, followed by a new line.
	 * Return: Always 0 (Success)
	 */
	int _putchar(char character)
	{
		/*write function,the first parameter (fd) is the file descriptor */
		/*where you want to write the file description */
		return (write(1, &character, 1));
	}
