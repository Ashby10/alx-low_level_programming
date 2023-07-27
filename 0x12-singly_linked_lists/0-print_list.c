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
list_t *tr;
size_t i;

i = 0;
tr = h;
while (tr != NULL)
{
	if (tr->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", tr->len, tr->str);
tr = tr->next;
i++;
}
return(i);
}
