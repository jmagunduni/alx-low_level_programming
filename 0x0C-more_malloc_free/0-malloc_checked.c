#include <stdlib.h>
#include "main.h"

/**
*malloc_checked - this function allocates memory
*through the malloc function
*@b:this is the total number of bytes to be
*aloocated
*Return: this function will retun a pointer
*to the memory allocated
*/

void *malloc_checked(unsigned int b)
{
void *pointer;

pointer = malloc(b);

if (pointer == NULL)
exit(98);
return (pointer);
}
