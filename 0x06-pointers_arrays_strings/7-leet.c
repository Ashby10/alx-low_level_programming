#include "main.h"
/**
 * leet - a function that replaces chars
 * @s: pointer to a string
 *
 * Return: string pointer
 */
char *leet(char *s)
{
	int i;
	int j;
	char a[] = {'a','A','e','E','o','O','t','T','l','L'};
	char b[] = {'4','4','3','3','0','0','7','7','1','1'};

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
	for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
		i++;
	}
	return (s);
}
