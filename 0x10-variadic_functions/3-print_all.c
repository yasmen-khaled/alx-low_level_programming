#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints
 * @format: list of types of arguments
 */


void print_all(const char * const format, ...)
{
	int x = 0;
	char *s, *p = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", p, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(l, int));
					break;
		case 'f':
		printf("%s%f", p, va_arg(l, double));
		break;
		case 's':
		s = va_arg(l, char *);
		if (!s)
		s = "(nil)";
		printf("%s%s", p, s);
		break;
		default:
		x++;
		continue;
			}
			p = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(l);
}
