#include "main.h"
/**
 * leet - a function that replaces chars
 * @s: pointer to a string
 *
 * Return: string pointer
 */
char *leet(char *s)
{
	int i;
	int j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	i = 0;
	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			s[i] = b[j];
		}
	}
	return (s);
}
