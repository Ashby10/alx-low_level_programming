#include "main.h"
/**
 * _strchr - function
 * @s: string pointer
 * @c: character
 * Return: string pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	if (s[i] == c)
		return (s + i);
	return (0);
}
