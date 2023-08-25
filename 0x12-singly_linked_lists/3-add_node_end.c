#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: double pointer
 * @str: string
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_list;
list_t *temp = *head;
unsigned int length = 0;

while (str[length])
length++;

new_list = malloc(sizeof(list_t));
if (!new_list)
return (NULL);

new->string = strdup(str);
new->length = length;
new->next = NULL;

if (*head == NULL)
{
 *head = new_list;
return (new_list);
}

while (temp->next)
temp = temp->next;

temp->next = new_list;

return (new_list);
}
