#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 * 
 * Return: Always 0  (Success)
 */

void print_triangle(int size)
{
int i, k;
if (size <= 0)
_putchar('\n');
else
{
for (i = 1; i <= size; i++)
{
for (k = 1; k <= size; k++)
{
if((i + k) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
