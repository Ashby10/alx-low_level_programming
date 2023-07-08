#include "main.h"
/**
 * factorial - calcul factorial
 * @n: number
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
}
