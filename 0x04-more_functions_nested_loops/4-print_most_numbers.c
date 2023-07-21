#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 * from 2 and 4 and you can
 * only use _putchar twice
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
int j;
for (j = 0; j <= 9; j++)
{
if (j == 2 || j == 4)
continue;
_putchar(j + 48);
}
_putchar('\n');
}
