#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: string
 *
 */

void print_rev(char *s)
{
int  length = strlen(s);
for (int i = length - 1; i >= 0; i--)
{
_putchar("%c", *(s + i));
}
_putchar('\n');

}
