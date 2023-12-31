#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function variadic
 * @n: number of par
 * @...: variadic
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum;

sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
	sum = sum + va_arg(ap, int);
va_end(ap);
return (sum);

}
