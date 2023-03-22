#include "main.h"
#include <unistd.h>
	/**
	 * _putchar - writes the character c to stdout
	 *
	 * Description: 'the program's description'
	 * @character: The character to print
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
	int _putchar(char character)
	{
		/*write function,the first parameter (fd) is the file descriptor */
		/*where you want to write the file description */
		return (write(1, &character, 1));
	}
