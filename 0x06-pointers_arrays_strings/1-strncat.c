#include "main.h"

/**
 * _strncat - concatenates tow strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 *
 * Return: dest
 */

char *strncat(char *dest, char *src, int n)
{
	int x, k;

	x = 0;

	while (dest[x] != '\0')
	{
	x++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[x] = src[k];
	x++;
	k++;
	}
	dest[x] = '\0';

	return (dest);
}
