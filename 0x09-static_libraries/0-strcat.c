#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int j;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[x] = src[j];
		x++;
		j++;
	}

	dest[x] = '\0';
	return (dest);
}
