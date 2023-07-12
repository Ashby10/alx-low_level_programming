#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function
 * @width: int
 * @height: int
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
int **str;
int i;
int j;

if (width <= 0 || height <= 0)
	return (NULL);
str = malloc(sizeof(*str) * height);
if (str == NULL)
	return (NULL);
for (i = 0; i < height; i++)
	{
		str[i] = malloc(sizeof(**str) * width);
		if (str[i] == NULL)
		{
			while(i--)
				free(str[i]);
			free(str);
			return (NULL);
		}
	for (j = 0; j < width; j++)
		str[i][j] = 0;
		}
}
