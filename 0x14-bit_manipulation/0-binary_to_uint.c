#include "main.h"

/**
 * binary_to_uint- function that converts a binary number to an unsigned int
 *
 *@b: string
 *
 * Return: conv
 */


unsigned int binary_to_uint(const char *b)
{
	int numb;
	unsigned int conv = 0;

	if (!b)
		return (0);

	for (numb = 0; b[numb]; numb++)
	{
		if(b[numb] < '0' || b[numb] > '1')
			return (0);
		conv = 2 * conv + (b[numb] - '0');
	}
	return (conv);
}
