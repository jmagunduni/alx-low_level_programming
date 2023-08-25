#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node beginning of list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{

list_t *new_list;
unsigned int length = 0;

while (str[length])
length++;

new_list = malloc(sizeof(list_t));

if (!new_list)
return (NULL);

new->string = strdup(str);
new->length = length;
new->next = (*head);
(*head) = new_list;
return (*head);

}
