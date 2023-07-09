#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int i, b, c, d, f, n;

	i = 0;
	b = 0;
	c = 0;
	d = 0;
	f = 0;
	n = 0;

	while (s[d] != '\0')
		d++;

	while (i < d && f == 0)
	{
		if (s[i] == '-')
			++b;

		if (s[i] >= '0' && s[i] <= '9')
		{
			n = s[i] - '0';
			if (b % 2)
				n = -n;
			c = c * 10 + n;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
		if (f == 0)
		return (0);

	return (c);
}

