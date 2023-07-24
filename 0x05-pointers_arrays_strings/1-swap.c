#include "main.h"

/**
 * swap - functin that swaps the values of tow integers
 *
 * @ptr: pointer input
 * @x: pointer input
 *
 * Description: functin that swaps the values of tow integers
 */

void swap(int *ptr, int *x)
{
	int valu = *ptr;
	*ptr = *x;
	*x = valu;

}
