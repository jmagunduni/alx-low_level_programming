#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the node at a certain index
 * in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: Returns the pointer to the node
 *  we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp_node = head;

	while (temp_node && counter < index)
	{
		temp_node = temp_node->next;
		counter++;
	}

	return (temp_node ? temp_node : NULL);
}
