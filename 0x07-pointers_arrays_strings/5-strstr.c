#include "main.h"


/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */


char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *x = haystack;
	char *i = needle;

	while (*x == *i && *i != '\0')
	{
	x++;
	i++;
	}

	if (*i == '\0')
	return (haystack);
	}

	return (0);
}
