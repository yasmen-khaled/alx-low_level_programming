#include "main.h"

/**
 * swap_int - swaps the values of tow integers
 *
 * @a: pointer input
 * @b: pointer input
 *
 * Description: functin that swaps the values of tow integers
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;

}
