#include "main.h"
/**
 * print_more_numbers - prints 10 times 0 to 14
 *
 * Return: void.
 */

void print_more_numbers(void)
{
int i;
int j;

for (i = 0; i < 10 ; i++)
{
for (j = 0; j < 14 ; j++)
{
_putchar(j);
}
}
_putchar('\n');
}
