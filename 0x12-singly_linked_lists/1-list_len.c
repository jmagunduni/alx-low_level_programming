#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: this is the pointer to the list_t list
 *
 * Return: this function returns number of elements in h
 */
size_t list_len(const list_t *h)
{
size_t size = 0;

while (h)
{
size++;
h = h->next;
}
return (size);
}
