#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates
 * @b: number
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
