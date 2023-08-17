
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: The string
 * @n:number
 * @...:variable.
 *
 * Description: If separator is NULL, it not printing.
 */



void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	char *s;
	unsigned int i;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(x, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(x);
}
