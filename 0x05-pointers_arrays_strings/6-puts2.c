#include "main.h"
/**
 * puts2 - function prints one of two chars
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int l = 0;
	int i = 0;
	char *j = str;
	int k;

	while (*j != '\0')
	{
		j++;
		l++;
	}
	i = l - 1;
	for (k = 0 ; k <= i ; k++)
	{
		if (k % 2 == 0)
	{
		_putchar(str[k]);
	}
	}
	_putchar('\n');
}
