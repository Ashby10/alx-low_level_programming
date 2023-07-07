#include "main.h"
/**
 * _memset - function
 * @s: string
 * @b: a character
 * @n: integer
 * Return: string pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
