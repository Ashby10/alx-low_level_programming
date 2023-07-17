#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
 *
 */
char *argstostr(int ac, char **av)
{
char *ptr;
int i, j, k, len;

if (ac == 0 || av == NULL)
	return (NULL);
len = 0;
k = 0;
for (i = 0; i < ac; i++)
	for ( j = 0; av[i][j] != '\0'; j++)
len++;
len += ac;
ptr = malloc(len * sizeof(char) + 1);
if (ptr == NULL)
	return (NULL);
for (i = 0; i < ac; i++)
	{
	for ( j = 0; av[i][j] != '\0'; j++)
	{
		ptr[k] = av[i][j];
		k++;
	}
//	if (ptr[k] == '\0')
	ptr[k++] = '\n';
	}
return (ptr);
}
