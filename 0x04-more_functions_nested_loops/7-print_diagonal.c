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
if (l <= 0)
_putchar('\n');
else
{
for (i = 1; x <= l; i++)
{
for (x = 1; x <= i; x++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
