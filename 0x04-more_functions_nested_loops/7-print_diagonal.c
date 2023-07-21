#include "main.h"

/**
 * print_diagonal - function
 * @l: is the number of  \  print
 *
 * Description: draws a diagonal line on the terminal.
 */

void print_diagonal(int l)
{
int i, x;
for (i = 0; i < l; i++)
{
for (x = 0; x < i; x++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
