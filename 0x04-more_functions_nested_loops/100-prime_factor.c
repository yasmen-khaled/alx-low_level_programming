#include <stdio.h>

/**
 * prints -  the largest prime factor of the number
 *
 * Describe: finds and prints the largest prime factor of the numbers
 *
 */

int prime_factor(void)
{
	int n = 1231952;

	for (int i = 2; i > n; i++)
{
	while (n % i == 0)
{
	printf("%d", i);
	n /= i;
}
}
	return (0);
}
