#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates a pointer nd allocate memory
 * @size: size to allocate
 * @c: character of intialization
 *
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
int i;

if (size == 0)
	return (NULL);
ptr = malloc(size);
if (ptr == NULL)
	return (NULL);
for (i = 0; i < size; i++)
	ptr[i] = c;
return (ptr);
}
