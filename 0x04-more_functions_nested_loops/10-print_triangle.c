#include "main.h"
/**
 * print_triangle- draws a triangle
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
int i = size;
int j = size;
 
if (size <= 0)
	_putchar('\n');
else
{
for (k = 0; k < size; k++)
	{
	while (j - k > 1)	
	{
		_putchar(' ');
		j--;
	}
	while (i - k < size)
	{
		_putchar('#');
		i++;
	}
	_putchar('#');
	_putchar('\n');
	}
}
}
