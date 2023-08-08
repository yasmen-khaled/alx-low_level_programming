#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main
 * @ac:  input
 * @av: double pointer
 *
 * Return: s
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, o = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			o++;
	}
	o += ac;

	s = malloc(sizeof(char) * o + 1);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		s[c] = av[a][b];
		c++;
	}
	if (s[c] == '\0')
	{
		s[c++] = '\n';
	}
	}
	return (s);
}
