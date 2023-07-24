#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program that generates random password
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int pdw[100];
	int x, sum, i;

	sum = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
	pdw[x] = rand() % 78;
	sum += (pass[x] + '0');
	putchar(pdw[x] + '0');
	if ((2772 - sum) - '0' < 78)
	{
	i = 2772 - sum - '0';
	sum += i;
	putchar(i + '0');
	break;
	}
	}
return (0);
}

