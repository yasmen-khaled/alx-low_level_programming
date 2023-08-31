#include "main.h"

/**
 * get_endianness-a function that checks the endianness
 *
 * Return: 0 0r 1
 *
 */

int get_endianness(void)
{
	unsigned int x =1;
	char *p = (char *) &x;

	return (*p);
}
