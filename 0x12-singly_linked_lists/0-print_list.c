#include <stdio.h>
#include "lists.h"

/**
 * print_list - this function prints all the elements of a linked list
 * @h: this is the pointer to the list_t list to print
 *
 * Return: the funstion  number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t size = 0;

while (h)
{
if (!h->string)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
size++;
}
return (size);
}
