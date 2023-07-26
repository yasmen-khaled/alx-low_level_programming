#include "main.h"

/**
 * _strcmp - compairr string
 * @s1: input
 * @s2: input
 *
 * Return: s1[x] - s2[x]
 */

int _stcmp(char *s1, char *s2)
{
int x;
x = 0;
while (s1[x] !=  '\0' && s2[x] != '\0')
{
	if (s1[x] != s2[x] != '\0')
	{
	return (s1[x] - s2[x]);
	}
	x++;
	}
	return (0);
}
