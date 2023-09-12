#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory with malloc
 * @b: how many bytes to allocate
 *
 * Return: a pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
