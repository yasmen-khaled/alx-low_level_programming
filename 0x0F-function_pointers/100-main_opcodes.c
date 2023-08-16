#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints 
 * @argc: number
 * @argv: array 
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int b, x;
	char *r;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	r = (char *)main;

	for (x = 0; x < b; x++)
	{
		if (x == b - 1)
		{
			printf("%02hhx\n", r[x]);
			break;
		}
		printf("%02hhx ", r[x]);
	}
	return (0);
}
