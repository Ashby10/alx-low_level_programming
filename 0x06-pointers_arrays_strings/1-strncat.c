#include "main.h"

/**
 * _strncat - a function that concatenate 2 strings
 * @dest: pointer of a char
 * @src: pointer of a char
 * @n: number of char to concatenate
 *
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((j < n) && (src[j] != '\0')) 
	{
		dest[i + j] = src[j];
		j++;
	}

return (dest);
}
