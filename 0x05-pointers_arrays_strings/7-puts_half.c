#include "main.h"

/**
 * puts_half - function tahat prints half of string
 * @str: input
 *
 * Return: half of print
 */

void puts_half(char *str)
{
	int i, x;
	int k = 0;

	for (i = 0; str[i] != '\0'; i++)
	k++;
	x = (k / 2);

	if ((k % 2) == 1)
	x = ((k + 1) / 2);

	for (i = x; str[a] != '\0'; i++)
	_putchar(str[a]);
	_putchar('\n');
}
