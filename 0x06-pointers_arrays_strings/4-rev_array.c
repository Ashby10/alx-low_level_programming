#include "main.h"
/**
 * reverse_array - a function that reverse an array
 * @a: pointer to an int value
 * @n: int
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; i < n--; i++)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
