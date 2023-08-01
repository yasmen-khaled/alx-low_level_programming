#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */


void print_diagsums(int *a, int size)
{
	int x, b, c;

	x = 0;
	b = 0;

	for (c = 0; c < size; c++)
	{
	x = x + a[c * size + c];
	}

	for (c = size - 1; c >= 0; c--)
	{
	b += a[c * size + (size - c - 1)];
	}

	printf("%d, %d\n", x, b);
}
