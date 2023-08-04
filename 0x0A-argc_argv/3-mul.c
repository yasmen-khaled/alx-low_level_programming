#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @num1: number og arguments
 * @num2: number of arguments
 * @result: multiply tow numbers
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(arvg[2]);

	int result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
