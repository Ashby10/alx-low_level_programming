#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints a list
 * @h: pointer head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t i;

i = 0;
while (h != NULL)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", tr->len, tr->str);
h = h->next;
i++;
}
return(i);
}