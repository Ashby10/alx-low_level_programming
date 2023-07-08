#include "main.h"
/**
 * _strspn - function
 * @s: string pointer
 * @accept: string pointer
 * Return: unsigned integer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
			return (s+i);
			}
	}
	s[i] = '\0';
	return (s);
}
