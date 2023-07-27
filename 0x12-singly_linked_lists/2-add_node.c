#include "lists.h"
/**
 *
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int l;
	list_ t *new;

new = malloc(sizeof(list_t));
if (!new)
	return (NULL);
	l = 0;
while (str[l])
	l++;
new->str = strdup(str);
new->len = l;
new->next = *head;
(*head) = new;
return (*head);
}
