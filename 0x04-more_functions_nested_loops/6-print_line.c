#include "main.h"

/**
 * print a straight line
 *@k: the charcter of _ to print
 *
 * Description:  function that draws a straight line in the terminal.
*/

void print_line(int k)
{
int i;
if (k <= 0)
_putchar('\n');i
else
{
for (i = 1; i <= k; i++)
_putchar('_');
_putchar('\n');
}
}
