#include "main.h"
/**
 * _strlen_recursion - function returns lenght of string
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int k;

	k = 0;
	if (*s)
	{
		k++;
		k += _strlen_recursion(s++)
	}
	return (k);
}
