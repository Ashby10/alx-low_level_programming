#include "main.h"
/**
 * leet - a function that replaces chars
 * @s: pointer to a string
 *
 * Return: string pointer
 */
char *string_toupper(char *s)
{
	int i;
	char a[10] = "aAeEoOtTlL";
	char b[10] = "4433007711";
	i = 0;
	while (a[i] != '\0')
	{
		while (i < j)
		{
			if (s[i] == a[i])
			{
				s[i] = a[j];
				j++;
			}
		}
		i++;
	}
	return (s);
}
