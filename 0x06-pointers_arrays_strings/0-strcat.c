#include "main.h"

/**
 * _strcat - concatenates tow strings
 *
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
char *x = dest;

while (*dest)
{
dest++
}

while (*src)
{
*dest++ = *src++;
}
*dest = '\0';

return (x);
}
