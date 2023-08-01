#include "lists_h"
#include <stdio.h>
/*
 * print_listint - function that prints a list
 * @h: head
 *
 * Return: int value
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
	printf("%d\n", h->n);
	c++;
	h = h->next;
	}
return (c);
}
