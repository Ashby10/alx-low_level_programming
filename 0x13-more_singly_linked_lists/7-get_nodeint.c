#include "lists.h"

/**
 * get_nodeint_at_index - get nth node
 * @head: head
 * @index: index of nth element
 *
 * Return: the nth element or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int c = 0;
listint_t *temp;

temp = head;
	while (temp || c < index)
	{
	c++;
	temp = temp->next;
	}
if (!head)
	return (NULL);
return (temp);
}
