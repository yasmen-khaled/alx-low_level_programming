#include "main.h"

/**
 * print_diagonal - function
 *
 * @n: is the number of  \  print
 * 
 */

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n');
else
{
for (i = 1; j <= n; i++)
{
for (j = 1; j <= i; j++)
_putchar(' ');
_putchar('92');
_putchar('\n');
}
}
}
