#include <stdio.h>
#include "main.h"

/**
 **_memset - this function sets the memory
 *with a constant byte
 *@s:this is the memory which will be filled
 *@b:this is the character to be copied
 *@n:this is the number of time that b char
 *will be copied
 *Return: this function will return the pointer
 *for the memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int cnt_i;

for (cnt_i = 0; cnt_i < n; cnt_i++)
{
s[cnt_i] = b;
}

return (s);

}

/**
**_calloc - this function allocates the memory
*of an array
*@nmemb: this is the total number of elements
*in the array
*@size: this is the actual size of each element
*in the array
*Return: this function returns the pointer to
*the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *pntr;

if (nmemb == 0 || size == 0)
return (NULL);

pntr = malloc(size * nmemb);

if (pntr == NULL)
return (NULL);

_memset(pntr, 0, nmemb * size);

return (pntr);

}
