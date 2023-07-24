#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: string
 *
 */

void print_rev(char *s)
{
	int long  length = 0;
	char x;

	while (*s != '\0')
	{
	long length++;
	s++;
	}
	s--;
	for (x = long length; x > 0; x--)
	i{
	_putchar(*s);
	s--;
	}

	_putchar('\n');


}

