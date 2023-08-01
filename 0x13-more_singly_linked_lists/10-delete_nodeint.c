#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that delete a node
 * @head: head pointer
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t d;
unsigned int i = 0;
	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		free(*head);
		*head = *temp->next;
		return (1);
	}
	while (*temp || i < index)
	{
		if (i == index - 1)
			d = temp;

temp = temp->next;
		i++;
	}
	d->next = temp->next;
	free(temp);
	return (1);
}
