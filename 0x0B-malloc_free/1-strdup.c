#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate  space location
 * @str: char
 * Return: memo
 */
char *_strdup(char *str)
{
	char *memo;
	int x, b = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	memo = malloc(sizeof(char) * (x + 1));

	if (memo == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		memo[b] = str[b];

	return (memo);
}
