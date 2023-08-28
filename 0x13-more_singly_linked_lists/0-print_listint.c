#include "lists.h"

/**
 * print_listint - This function prints all elements
 * which belong to the
 * linked list
 *  prints all the elements of a linked list
 * @h: linked lists
 *
 * Return: the function return  the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
