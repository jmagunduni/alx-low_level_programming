#include <stdlib.h>
#include "main.h"

/**
**_realloc - this function reallocates
*the block of memory which was preeviously
*allocated by the maaloc function
*@ptr: this is the pointer of the memory
*which was previously allocated by the malloc
*function
*@old_size: this is the size of the memory
*which is allocated to the pointer
*@new_size: this is the new size of the memory
*allocated
*Return: this function returns a pointer
*to the newly allocated block of memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *pntr;
char *old_pntr;
unsigned int cnt_i;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}

if (!ptr)
return (malloc(new_size));

pntr = malloc(new_size);

if (!pntr)
return (NULL);

old_pntr = ptr;

if (new_size < old_size)
{
for (cnt_i = 0; cnt_i < new_size; cnt_i++)
pntr[cnt_i] = old_pntr[cnt_i];
}

if (new_size > old_size)
{
for (cnt_i = 0; cnt_i < old_size; cnt_i++)
pntr[cnt_i] = old_ptr[cnt_i];
}

free(ptr);
return (pntr);
}
