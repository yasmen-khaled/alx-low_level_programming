#include "main.h"

/**
 *print_binary-function that prints the binary representation of a number
 *@n: print
 *
 *
 */

void print_binary(unsigned long int n)
{
	int x, rep = 0;

	unsigned long int num;

	for (x = 63; x>=0; x--)
	{
		num = n >> x;
		if (num & 1)

		{

		_putchar('1');
		rep++;

		}

		else if (rep)
		_putchar('0');
	}

	if (!rep)
	_putchar('0');
}
