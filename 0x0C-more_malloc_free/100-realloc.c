#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates
 *
 * @ptr: pointer
 * @old_size: size
 * @new_size: size
 *
 * Return: pointer
 *
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *b;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	a = malloc(new_size);
	if (!a)
		return (NULL);

	b = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			a[x] = b[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			a[x] = b[x];
	}

	free(ptr);
	return (a);
}
