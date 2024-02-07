#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - searches for a value in an array
 * @array: array
 * @size: size
 * @value: value
 *
 * Return: -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (!array || size == 0)
		return (-1);

	while (x < size)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}

	return (-1);
}
