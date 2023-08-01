#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a node
 * @head: the head
 * @n: int
 *
 * Return: a node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
	return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
