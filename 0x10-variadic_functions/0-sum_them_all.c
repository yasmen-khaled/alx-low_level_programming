#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all
 * @n:number
 * @...:variable
 *
 * Return: s
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int z, s = 0;

	va_start(x, n);

	for (z = 0; z < n; z++)
		s += va_arg(x, int);

	va_end(x);

	return (s);
}
