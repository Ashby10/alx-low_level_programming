#include "main.h"

/**
 * _strncpy - a function that copy a n char
 * @dest: pointer of a char
 * @src: pointer of a char
 * @n: number of char to concatenate
 *
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

return (dest);
}
