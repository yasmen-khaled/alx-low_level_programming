#include <stdlib.h>
#include "main.h"

/**
 * *malloc_memo - allocate  using malloc
 * @i: number of bytes
 *
 * Return: p
 */

void *malloc_memo(unsigned int i)
{
	void *p;

	p = malloc(i);

	if (p == NULL)
		exit(98);

	return (p);
}
