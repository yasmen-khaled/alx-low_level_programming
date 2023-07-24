#include "main.h"

/**
 * _atoi - function that convert a string to integer
 *
 * @s: string to converted
 *
 * Return: int converted from string
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int l = 0;
	int e = 0;
	int d = 0;

	while (s[l] != '\0')
	l++;
	while (a < l && f == 0)
	{
	if (s[a] == '-')
	++b;
	if (s[a] >= '0' && s[a] <= '9')
{
	d = s[a] - '0';
	if (d % 2)
	d = -d;
	c = c * 10 + d;
	e = 1;

	if (s[a + 1] < '0' || s[a + 1] > '9')
	break;
	c = 0;
}
	a++;
}
if (c == 0)
return (0);

return (c);
}
