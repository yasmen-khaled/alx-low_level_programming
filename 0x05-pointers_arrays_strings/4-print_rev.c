#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: string
 *
 */

void print_rev(char *s)
{
	int length = 0;
	char x;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	s--;
	for (x = length; x > 0; x--)
	{
	_putchar(*s);
	s--;
	}

	_putchar('\n');


}

