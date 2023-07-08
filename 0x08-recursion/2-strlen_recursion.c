include "main.h"
/**
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
	int i;
	int k;

	k = 0;
	if (*s)
	{
		k++;
		k += _strlen_recursion(s++)
	}
	return (k);
}
