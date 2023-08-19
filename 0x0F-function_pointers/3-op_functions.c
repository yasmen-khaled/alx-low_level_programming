#include "3-calc.h"

int op_add(int c, int d);
int op_sub(int c, int d);
int op_mul(int c, int d);
int op_div(int c, int d);
int op_mod(int c, int d);

/**
 * op_add - Returns the sum of two numbers.
 * @c: first
 * @d: second
 *
 * Return:c and d.
 */



int op_add(int c, int d)
{
	return (c + d);
}


/**
 * op_sub - Returns two numbers.
 * @c:first.
 * @d:second
 *
 * Return:c and d.
 */


int op_sub(int c, int d)
{
	return (c - d);
}


/**
 * op_mul - Returns two numbers.
 * @c:first
 * @d:second
 *
 * Return: c and d.
 */


int op_mul(int c, int d)
{
	return (c * d);
}


/**
 * op_div - two numbers.
 * @c:first number.
 * @d: second number.
 *
 * Return: The quotient of c and d.
 */


int op_div(int c, int d)
{
	return (c / d);
}

/**
 * op_mod - division of two numbers.
 * @c: The first number.
 * @d: The second number.
 *
 * Return: c by d.
 */



int op_mod(int c, int d)
{
	return (c % d);
}
