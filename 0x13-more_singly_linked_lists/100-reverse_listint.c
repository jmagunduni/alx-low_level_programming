#include "lists.h"

/**
 * reverse_listint - function reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevs_node = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prevs_node;
		prevs_node = *head;
		*head = next_node;
	}

	*head = prevs_node;

	return (*head);
}
