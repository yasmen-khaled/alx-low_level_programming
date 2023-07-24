#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @ptr: string
 *
 * Return: length
 */

int _strlen(char *ptr)
{
int length = 0;
while (*ptr != '\0')
{
length++;
ptr++;
}
return (length);
}
