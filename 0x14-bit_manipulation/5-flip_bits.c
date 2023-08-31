#include "main.h"

/**
 *flip_bits-unction that returns the number of bits you would need to flip
 *
 *@n: number
 *@m: number
 *
 *
 * Return: numb
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xi, numb = 0;
	unsigned long int now;
	unsigned long int fli = n ^ m;

		for (xi = 63; xi >= 0; xi--)
		{
			now = fli >> xi;
			if (now & 1)
				numb++;
		}
		return (numb);
}
