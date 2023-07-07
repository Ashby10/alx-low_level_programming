#include "main.h"
/**
 * string_toupper - a function that reverse an array
 * @a: pointer to a string
 *
 * Return: string pointer
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 22;
	}
	return a;
	}
