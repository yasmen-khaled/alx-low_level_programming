#include "main.h"

/**
 * print_number - print chars
 * @j: integer
 *
 *
 *
 * Return: 0
 */

void print_number(int j)
{
	unsigned int x;

	x = j;

	if (j < 0)
	{
		_putchar('-');
		x = -j;
	}

	if (x / 10 != 0)
	{
	print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
