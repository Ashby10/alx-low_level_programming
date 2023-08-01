#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add a node in the end
 * @head: head
 * @n: n
 *
 * Return: a node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *t;
t = *head;
new = malloc(sizeof(listint_t));
if (!new)
	return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
	*head = new;
else
{
while (t->next != NULL)
	t = t->next;
t->next = new;
}
return (new);
}
