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
if (size == 0 || nmeb == 0)
	return (NULL);
else
ptr = malloc (nmeb * size);
if (!ptr)
return (NULL);
else
	for (i = 0; i < nmeb; i++)
		ptr[i] = 0;
}
