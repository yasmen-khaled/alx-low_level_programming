#include <stdio.h>

/**
 * main - print numbers 1 - 100 followed by a new line
 * Return: Always 0 (Success)
 *
 *Describe: prints the numbers from 1 to 100, followed by a new line.
 *
 */

int main()
{
int i;
for (i = 1; i <= 100; i++)
{

if (i % 3 == 0 && i % 5 == 0)
{
rintf("FizzBuzz\n");
}
else if (i % 3 == 0){
printf("Fizz\n");
}
else if (i % 5 == 0){
printf("Buzz\n");
}
else
{
printf("%d\n", i);
}
return (0);
}
