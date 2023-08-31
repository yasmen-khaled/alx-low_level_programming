#include "main.h"
#include <unistd>
/*
 * _putchar- charcacter
 *
 * @c: print
 *
 *Return:1
 */

 int _putchar(char c)
 {
	 return (write(1, &c, 1));

 }
