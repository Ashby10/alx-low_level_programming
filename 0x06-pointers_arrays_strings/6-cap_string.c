#include "main.h"
/**
 * cap_string - a function that reverse an array
 * @a: pointer to a string
 *
 * Return: string pointer
 */
char *cap_string(char *a);
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
		{	a[i] = a[i] - 32;
			i++;
		}
	else
		if (a[i] == ' ' ||
		a[i - 1] == '\t' ||
		a[i - 1] == '\n' ||
		a[i - 1] == ',' ||
		a[i - 1] == ';' ||
		a[i - 1] == '.' ||
		a[i - 1] == '!' ||
		a[i - 1] == '?' ||
		a[i - 1] == '"' ||
		a[i - 1] == '(' ||
		a[i - 1] == ')' ||
		a[i - 1] == '{' ||
		a[i - 1] == '}')
		{
			i++;
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
		}
	i++;
	}
	return (a);
}
