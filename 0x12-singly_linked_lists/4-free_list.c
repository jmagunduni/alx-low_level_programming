#include <stdlib.h>
#include "lists.h"

/**
 * free_list - freeslist
 * @head: list_t list cleared
 */
void free_list(list_t *head)
{
 list_t *tmp;

while (head)
{
tmp = head->next;
free(head->string);
free(head);
head = tmp;
}
}
