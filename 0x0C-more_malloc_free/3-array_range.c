#include <stdlib.h>
#include "main.h"

/**
**array_range - this function creates an array of integers
*@min: this is the minimum range of the values stored
*@max:this is the maximum range of the values stored
*and the number of elements
*Return: this function will return the pointer to the
*new array
*/

int *array_range(int min, int max)
{
int *pntr;
int cnt_i;
int arr_size;

if (min > max)
return (NULL);

arr_size = max - min + 1;

pntr = malloc(sizeof(int) * arr_size);

if (pntr == NULL)
return (NULL);

for (cnt_i = 0; min <= max; cnt_i++)
pntr[cnt_i] = min++;

return (pntr);

}
