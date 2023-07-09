#include "main.h"

int search(int n, int i);
/**
 * _sqrt_recursion - function for square
 * @n: integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (search(n, 0));
}
/**
 * search - search for the natural square
 * @n: number
 * @i: int
 * Return: int
 */
int search(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (search(n, i + 1));
}
