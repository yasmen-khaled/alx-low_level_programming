#include "main.h"

/**
 * cap_string - capitalizes all words of string
 *
 * @str: the string
 *
 * Return: a pointer to string
 */

char *cap_string(char *str)
{
int x = 0;
int c = 1;

	while (str[x] != '\0')
	{
	char y = str[x];

	if (c && (y >= 'a' && y <= 'z'))
	{
	y = y - 'a' + 'A';
	c = 0;
}
else if (y  == ' ' || y  == '\t' || y  == '\n' ||
	y  == ',' || y == ';' ||
	y == '.' || y  == '!' ||
	y  == '?' || y == '"' ||
	y == '(' || y == ')' ||
	y == '{' || y == '}')
	{
	c = 1;
	}
	else
	{
	c = 0;
	}
	str[x] = y;
	x++;
	}

	return (str);
}
