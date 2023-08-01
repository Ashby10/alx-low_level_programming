#include "lists.h"
#include <stdio.h>
/*
 * sum_listint - calculate the sum the values of a list
 * @head: head
 *
 * Return: a sum of values
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *t = head;

	if (!head)
	return (0);
while (t)
{
	sum += t->n;
	t = t->Next;
}
return (sum);
}
