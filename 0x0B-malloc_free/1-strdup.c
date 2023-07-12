#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that duplicate a string
 * @str: string to copy
 * Description: allocate memory for an array
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
char *ptr;
unsigned int i;
unsigned int j;

if (str == 0)
	return (NULL);
j = 0;
i = 0;
while (str[i] != '\0')
i++;
ptr = malloc(sizeof(char) * (i + 1));
if (ptr == NULL)
return (NULL);

for (j = 0; j < i; j++)
ptr[j] = str[j];
return (ptr);
}
