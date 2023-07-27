#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: input value
 *
 * Return: str
 */

char *leet(char *str)
{
	int x, k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
	for (k = 0; k < 10; k++)
	{
	if (str[x] == s1[k])
	{
	str[x] = s2[k];
	}
	}
	}
	return (str);
}

