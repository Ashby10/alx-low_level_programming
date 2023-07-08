#include "main.h"
/**
 * _strspn - function
 * @s: string pointer
 * @accept: string pointer
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int t;

	t = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				t++;
				break;
			}
			else if (accept[j + 1] == '\0')
					return (t);
	}
	return (t);
}
