#include "lists.h"

/**
 * listint_len - this function returns the number of elements
 *  in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: this function returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
