#include "main.h"

/**
 * print_line function
 * @k: the charcter of _ to print
 *
 * Description: function that draws a straight line in the terminal.
 *
 */

void print_line(int k)
{
int i;
for (i = 0; i < k; i++)
{
_putchar('_');
}
_putchar('\n');
}
