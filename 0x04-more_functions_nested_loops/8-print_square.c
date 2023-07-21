#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
 *
*/

void print_square(int size)
{
int i, x;
for (i = 0; i < size; i++)
{
for (x = 0; x < size; x++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
_putchar(\n);
}
