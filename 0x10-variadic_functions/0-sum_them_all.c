#include "variadic_functions.h"
#include <stdarg.h>
/**
 *
 *
 *
 *
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
va_list ap;
int i;

int sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++
		sum = sum + va_arg(ap, int);
		va_end(ap);
return (sum);

}
