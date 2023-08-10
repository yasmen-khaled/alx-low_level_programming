#include <stdlib.h>
#include "main.h"

/**
 * *_memset - constant byte
 * @s: memory area
 * @b: char
 * @n: number
 *
 * Return: pointer
 *
 *
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates
 *
 * @nmemb: number
 * @size: size
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (a);
}
