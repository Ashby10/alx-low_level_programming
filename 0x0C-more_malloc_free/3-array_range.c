#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that arrange numbers
 * @min: min number
 * @max: max number
 *
 * Return: int pointer
 */
int *array_range(int min, int max)
{
int *ptr;
int i;

	if (min > max)
	return (NULL);
ptr = malloc((max - min + 1) * sizeof(int));
if (ptr == NULL)
	return (NULL);
i = 0;
while (min + i <= max)
{	ptr[i] = min + i;
i++;
}
return (ptr);
}
