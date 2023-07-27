#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function that adds a node
 * @head: pointer to a pointer
 * @str: string
 *
 * Return: the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int l;
	list_t *new;

new = malloc(sizeof(list_t));
if (!new)
	return (NULL);
	l = 0;
while (str[l])
	l++;
new->str = strdup(str);
new->len = l;
new->next = (*head);
(*head) = new;
return (*head);
}
