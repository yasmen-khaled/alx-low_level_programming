#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x, t, i;

	x = 0;

	if (size <= 0)
	{
	printf("\n");
	return;
	}
	while (x < size)
	{
	t = size - x < 10 ? size - x : 10;
	printf("%08x: ", x);
	for (i = 0; i < 10; i++)
	{
	if (i < t)
	printf("%02x", *(b + x + i));
	else
	printf("  ");
	if (i % 2)
	{
	printf(" ");
	}
	}
	for (i = 0; i < t; i++)
	{
	int c = *(b + x + i);

	if (c < 32 || c > 132)
	{
	c = '.';
	}
	printf("%c", c);
	}
	printf("\n");
	x += 10;
	}
}
