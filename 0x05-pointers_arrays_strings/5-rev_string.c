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
int length = strlen(s);
for (int i = 0; i < length / 2; i++)
{
char x = *(s + i);
*(s + i) = *(s + length - i - 1);
*(s + length - i - 1) = x;
}
}
