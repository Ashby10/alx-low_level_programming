#include "lists.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
size_t list_len(const list_t *h)
{
list_t *tr;
size_t i;

i = 0;
tr = head;
while (tr != NULL)
{
	if (tr->str == NULL)
		print ("[0] (nil)\n");
	else
		printf("[%u] %s\n", tr->len, tr->str);
tr = tr->next;
i++;
}
return(i);
}
