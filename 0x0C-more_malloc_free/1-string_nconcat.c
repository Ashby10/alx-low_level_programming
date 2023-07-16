#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number to concatenate
 *
 * Return: pointer to a string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, k;

i = 0;
j = 0;
while (s1[i] != '\0')
	i++;
while (s2[j] != '\0')
	j++;
if (n > j)
	n = j;
str = malloc(sizeof(char) * (i + n + 1));
if (!str)
	return (NULL);
for (k = 0; s1[k] != '\0'; k++)
{
	str[k] = s1[k];
}
	for (k = 0; k < n; k++)
{
	str[i + k] = s2[k];
}
str[i + n + 1] = '\0';
return (str);
}
