#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int x;
	int k;
	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
	for (k = 0; k < 52; k++)
	{
	if (s[x] == a1[k])
	{
	s[x] = rot[k];
	break;
	}
	}
}
	return (s);
}

