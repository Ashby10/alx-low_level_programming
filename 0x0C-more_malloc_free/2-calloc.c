#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (size == 0 || nmemb == 0)
	return (NULL);
else
ptr = malloc (nmemb * size);
if (!ptr)
return (NULL);
else
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
return (ptr);
}
