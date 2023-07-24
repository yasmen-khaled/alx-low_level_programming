#include "main.h"

/**
 * puts2 - function that prints every other character of string
 *
 * @str: input
 *
 * Return: print
 *
 */

void puts2(char *str)
{
	int x = 0;
	int i = 0;
	char *j = str;
	int k;

	while (*j != '\0')
	{
	j++;
	x++;
	}
	i = x - 1;
	for (k = 0; k <= i; k++)
	{
	if (k % 2 == 0)
	{
	_putchar(str[k]);
	}
	}
	_putchar('\n');

}
