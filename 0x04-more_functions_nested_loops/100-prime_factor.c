#include <stdio.h>

/**
 * main -  the largest prime factor of the number
 *
 * Description: finds and prints the largest prime factor of the numbers
 *
 * Return: Always 0 (seccess)
 */

int main(void)
{
	long int  n = 612852475143;
	int i = 3;

	while (i <= n)
{
	if (n % i == 0)
{
	printf("%d\n", i);
	n /= i;
}
	else
{
	i++;
}
}
	return (0);
}
