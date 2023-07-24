#include "main.h"

/**
 * main - pointer
 *
 * Return: Always return 0 (seccess)
 *
 * Description: functin that takes a pointer to an int as prameter points to 98
 */

int main(void)
{
	int x = 98;
	int *ptr = &x;

	_putchar("befor update: %d\n", *ptr);

	updateVal(ptr);

	_putchar("After update : %d\n", *ptr);

	return (0);
}
