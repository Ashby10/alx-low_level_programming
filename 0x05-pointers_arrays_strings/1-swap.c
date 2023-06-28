#include "main.h"
/**
 * swap_int - swaps 2 values
 * @a: int 1
 * @b: int 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
