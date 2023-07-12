#include "main.h"
/**
 * cap_string - a function that reverse an array
 * @a: pointer to a string
 *
 * Return: string pointer
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
		{	a[i] = a[i] - 32;
			i++;
		}
	else
		if (a[i] == ' ' ||
		a[i] == '\t' ||
		a[i] == '\n' ||
		a[i] == ',' ||
		a[i] == ';' ||
		a[i] == '.' ||
		a[i] == '!' ||
		a[i] == '?' ||
		a[i] == '"' ||
		a[i] == '(' ||
		a[i] == ')' ||
		a[i] == '{' ||
		a[i] == '}')
		{
			i++;
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		i--;
		}
	}
	return (a);
}
