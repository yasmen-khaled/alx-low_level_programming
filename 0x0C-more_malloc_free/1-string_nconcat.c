#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates
 *
 * @s1: string
 * @s2: string
 *
 * @n: number of bytes
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int q = 0, v = 0, a = 0, b = 0;

	while (s1 && s1[a])
		a++;
	while (s2 && s2[b])
		b++;

	if (n < b)
		x = malloc(sizeof(char) * (a + n + 1));
	else
		x = malloc(sizeof(char) * (a + b + 1));

	if (!x)
		return (NULL);

	while (q < a)
	{
		x[q] = s1[q];
		q++;
	}

	while (n < b && q < (a + n))
		x[q++] = s2[v++];

	while (n >= b && q < (a + b))
		x[q++] = s2[v++];

	x[q] = '\0';

	return (x);
}
