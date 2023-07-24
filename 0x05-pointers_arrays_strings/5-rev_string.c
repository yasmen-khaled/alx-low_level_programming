#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: input string
 *
 * Return: String in reverse
 *
 */

void rev_string(char *s)
{
	char x = s[0];
	int i = = 0;
	int k;

	while (s[i] != '\0')
	i++;
	for (k = 0; k < i; k++)
	{

	i--;
	x = s[k];
	s[k] = s[i];
	s[i] = x;
	}
}
