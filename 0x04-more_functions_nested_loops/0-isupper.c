/**
 * _isupper - this function check whether
 * the user has entered upper case or
 * lower case charaters in the program
 * Description: checks upper case characters
 * from the user input
 * @c: character value to be enterednby the user
 * Return: 0 or 1
 */

#include "main.h"

/*while the parameter of this method takes integer the value passed*/
/*is converted to ASCII eg A = 65 and Z = 90 hence in the code we  */
/*can simply say greater or equal to or less or equal to */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
