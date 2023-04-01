#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: 'print something in screen but dont use  puts
 * but dont use printf statement- altenate statement is write'
 * Return: Always 1 (Success)
 */
int main(void)
{
	/*use write statement*/
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
