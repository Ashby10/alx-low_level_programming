#include"lists.h"

/**
 * pop_listint - delete the head element
 * @head: pointer to head
 *
 * Return: int value
 */
int pop_listint(listint_t **head)
{
listint_t *t;
int d;
if (!head || !*head)
	return (0);
d = (*head)->n;
t = (*head)->next;
free(*head);
(*head) = t;
return (d);
}
