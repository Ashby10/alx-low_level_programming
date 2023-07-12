#include "main.h"
#include <stdlib.h>
/**
 * *create_array - a function creates pointer ,allocate memory
 * @size: size to allocate
 * @c: character of intialization
 *
 * Description: thi is a desc for this function
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
int unsigned i;

if (size == 0)
	return (NULL);
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
