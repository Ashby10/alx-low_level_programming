#include "main.h"
/**
 * _memcpy - function
 * @dest: destination pointer
 * @src: source pointer
 * @n: unsigned integer
 * Return: string pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}
