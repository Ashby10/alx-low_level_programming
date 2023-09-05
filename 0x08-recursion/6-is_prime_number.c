#include "main.h"
int search(int n, int i);
/**
 * is_prime_number - function for prime number
 * @n: integer
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (search(n, n - 1));
}

/**
 * search - search for the prime num
 * @n: int
 * @i: integer
 * Return: int
 */
int search(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i == 0 && i > 0)
	return (0);
	return (search(n, i - 1));
}
