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
	int i;

	i = 0;
	while (s2[i] != '\0' && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
