#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: return the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;
	listint_t *temp_node = head;

	while (temp_node)
	{
		sum_data += temp_node->n;
		temp_node = temp_node->next;
	}

	return (sum_data);
}
