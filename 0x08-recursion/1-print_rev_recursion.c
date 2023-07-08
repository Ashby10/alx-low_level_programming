#include <stdio.h>
/**
 * _print_rev_recursion - a recursive funtion puts
 * @s: string
 * Retrun: void
 */
void _print_rev_recursion(char *s)
{
	if (*si)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
