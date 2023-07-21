#include "main.h"

/**
* @k: is the number of times the _ character
* should be printed
*
* Description: print a straight linei
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
