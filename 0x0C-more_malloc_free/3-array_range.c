#include <stdlib.h>
#include "main.h"

/**
 * *array_range - integers
 * @min: values
 * @max: values
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *a;
	int x, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	a  = malloc(sizeof(int) * s);

	if (a == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		a[x] = min++;

	return (a);
}
