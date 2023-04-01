#include <stdio.h>
/**
*main - Write a C program that prints the size of various types
** /**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
/*data delcaration section*/
char sChar;
int sInt;
long int slInt;
long long int lli;
float sFloat;

/*printing the size of each date type*/
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(sChar));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(sInt));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(slInt));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(sFloat));
return (0);
}
