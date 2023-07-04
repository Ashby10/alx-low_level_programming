#include "main.h"
/**
 * _strcat - a function that concatenate 2 strings
 * @dest: pointer of a char
 * @src: pointer of a char
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
j = 0;
while ( *(dest + i) != '\0' )
{
i++;
}
while ( *(src + j) != '\0' )
{
*(dest+i+j) = *(src + j);
j++;
}
return dest;
}
