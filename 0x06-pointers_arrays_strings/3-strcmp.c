#include "main.h"
/**
 * _stcmp - a function that compares 2 strings
 * @s1: pointer of a char
 * @s2: pointer of a char
 *
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int j, i;
	int t1, t2;

	i = 0;
	j = 0;
	t1 = 0;
	t2 = 0;
	while (src[j] != '\0')
	{
		t1 = t1 + s1[j];
		j++;
	}
	while (s2[i] != '\0')
	{
		t2 = t2 + s2[i];
		i++;
	}
return (t1 - t2);
}
