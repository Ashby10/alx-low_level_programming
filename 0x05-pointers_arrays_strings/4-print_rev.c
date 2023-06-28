#include "main.h"
/**
 * print_rev - reverse print
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int l = 0;
	int i;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (i = l; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
