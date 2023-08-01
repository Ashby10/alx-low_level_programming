#include "lists.h"

/**
 * sum_listint -  sum of n
 * @head: the head
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int i = 0;
listint_t *temp = head;

while (temp)
{
i += temp->n;
temp = temp->next;
}

return (i);
}
