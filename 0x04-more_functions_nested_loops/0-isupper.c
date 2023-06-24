#include "main.h"

/** _isupper - checks for uppercase char
 * @c: the char to check
 *
 *
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
if (c <= 'Z'  && c >= 'A' )
return (1);
else
return (0);
}

