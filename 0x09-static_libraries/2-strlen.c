#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
