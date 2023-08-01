#include "main.h"
#include <stdio.h>
/**
 * listint_len - counts the lenght of a list
 * @h: the header
 *
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
size_t c = 0;

while (h)
{
	c++;
	h = h->next;
}
return (c);
}
