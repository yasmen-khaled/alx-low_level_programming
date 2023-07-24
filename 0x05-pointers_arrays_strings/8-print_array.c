#include "main"
#include <stdio.h>


/**
 * print_array - function that prints n elments of an array
 *
 * @a: array name
 * @n: element number
 *
 * Return: a & n inputs
 */

void print_array(int *a, int n)
{
int x;
for (x = 0; x < (n - 1); x++)
{
printf("%d, ", a[x]);
}
if (x == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
