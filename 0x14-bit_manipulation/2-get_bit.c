#include "main.h"

/**
 * get_bit- function that sets the value of a bit to 1 at a given index.
 *
 *@n:number
 *@index: bit
 *
 * Return: set
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int set;

	if (index > 63)
	return (-1);
	set = (n >> index) & 1;

	return (set);
}
