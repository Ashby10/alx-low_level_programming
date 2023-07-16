#include "main.h"
#include <stdlib.h>
/**
 * _calloc - calloc like
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (size == 0 || nmemb == 0)
	return (NULL);
else
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
else
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
return (ptr);
}
