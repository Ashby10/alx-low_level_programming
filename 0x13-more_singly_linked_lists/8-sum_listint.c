#include "lists.h"
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

while (t)
{
	sum += t->n;
	t = t->next;
}
return (sum);
}
