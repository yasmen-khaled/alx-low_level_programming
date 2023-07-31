#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: memory stored
 *@src: memory where copied
 *@n:  bytes
 *
 *Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int k = n;

	for (; x < k; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}


