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
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
