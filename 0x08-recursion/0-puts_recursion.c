#include <stdio.h>
/**
 * _puts_recursion - a recursive funtion puts
 * @s: string
 * Retrun: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	putchar('\n');
}
