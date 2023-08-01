#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node nth position
 * @head: pointer to head
 * @idx: index
 * @n: n value
 *
 * Return: new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new, *t;

t = *head;
i = 0;
new = malloc(sizeof(listint_t));
if (!new || !head)
	return (NULL);
new->n = n;
new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (t || i < idx)
	{
		if (i == idx - 1)
		{
		new->next = t->next;
		t->next = new;
		return (new);
		}
	t = t->next;
	i++;
	}
return (NULL);
}
