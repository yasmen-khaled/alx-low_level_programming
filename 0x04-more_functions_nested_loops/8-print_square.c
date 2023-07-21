#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @s: is the size of the square
 *
 * Return: Always 0 (Success)
*/

	void print_square(int s)

{
	int i, k;
	for (i = 1; i <= s; i++)
{
	for (k = 1; k  <= s; k++)
	_putchar('#');
	_putchar('\n');
}
}
