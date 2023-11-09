#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function print
 * @format: arg formats
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *s = "";

va_list p;
va_start(p, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
			printf("%s%c", s, va_arg(p, int));
			break;
			case 'i':
			printf("%s%d", s, va_arg(p, int));
			break;
			case 'f':
			printf("%s%f", s, va_arg(p, double));
			break;
			case 's':
			str = va_arg(p, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", s, str);
			break;
			default:
			i++;
			continue;
			}
		s = ", ";
		i++;
		}
	}
printf("\n");
va_end(p);
}
