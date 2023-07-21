#include "main.h"
/**
* largest_number - returns the largest of 3 numbers
* @l: first integer
* @o: second integer
* @s: third integer
* Return: largest number
*/
int largest_number(int l, int o, int s)
{
int num;
if (l > o && l > s)
{
num = l;
}
else if (l > o && s > l)
{
num = s;
}
else if (o > s)
{
num = o;
}
else
{
num = s;
}
return (num);
}
