#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @t: size of the triangle
 * 
 * Return: Always 0  (Success)
 */

void print_triangle(int t)
{
int i, k;
if (t <= 0)
_putchar('\n');
else
{
for (i = 1; i <= t; i++)
{
for (k = 1; k <= t; k++)
{
if ((i + k) <= t)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
