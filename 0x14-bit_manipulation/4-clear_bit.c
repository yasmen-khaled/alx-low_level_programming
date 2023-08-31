#include "main.h"

/**
 *clear_bit-unction that sets the value of a bit to 0 at a given index
 *@n: pointer
 *@index: bit
 *Return: 1 or -1
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long x = 1;


	if (index > 63)
		return (-1);
	*n = (~(x << index) & *n);
	return (1);
}
