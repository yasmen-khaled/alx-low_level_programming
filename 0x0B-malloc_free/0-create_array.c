#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size
 * @size: size of array
 * @c: assign
 *
 * Description: size and assign char c
 *
 * Return: s to array if null fail
 *
 */


char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		s[x] = c;
	return (s);
}
