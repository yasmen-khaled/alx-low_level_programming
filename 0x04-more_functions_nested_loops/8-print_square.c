#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
 *
*/

void print_square(int size)
{
int i, k;

for (i = 1; i <= size; i++)
{

for (k = 1; k <= size; k++)
{
_putchar('#');
}
_putchar('\n');

}
return (0);
}
