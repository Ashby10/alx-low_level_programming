#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenate strings
 * @s1: string
 * @s2: string
 *
 * Description: this is a longer desc
 * Retrun: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
int i;
int j;
int k;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
j = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
str = malloc(i + j + 1);
if (str == NULL)
return (NULL);
for (k = 0; k < i; k++)
str[k] = s1[k];
for (k = 0; k < j; k++)
str[i + k] = s2[k];
str[i + j] = '\0';
return (str);
}
