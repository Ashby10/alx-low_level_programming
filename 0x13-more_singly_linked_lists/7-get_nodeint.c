#include "lists.h"

/**
 * get_nodeint_at_index - get nth node
 * @head: head
 * @index: index of nth element
 *
 * Return: the nth element or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
if (!head)
return (NULL);
while (temp && i < index)
{
temp = temp->next;
i++;
}

return (temp);
}
