#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *creat_b(char *file);
void close_file(int le);

/**
 *creat_b - buffer allocates 1024 byte
 *@file: buffer file
 *return: p
 *
 */

char *creat_b(char *file)
{
char *p;
p = malloc(sizeof(char) * 1024);
if (p == NULL)
{
	dprintf(STDERR_FILENO, "Error: %s\n", file);
	exit(99);
}
return (p);
}

/**
 *close_file - close file
 *@le: the file
 *
 */


void close_file(int le)
{
	int clo;
clo = close(le);
	if (clo == -1)
	{
		dprintf(STDERR_FILENO, "Error: %d\n", le);
		exit(100);
	}
}
/**
 *main - file copy to anothor file
 *@argc: number
 *@argv: array
 *return:0
 */

int main(int argc, char *argv[])
{
	int x, y, z, q;
	char *p;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_to\n");
	exit(97);
	}
	p = creat_b(argv[2]);
	x = open(argv[1], O_RDONLY);
	z = read(x, p, 1024);
	y = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);


	do {
	if (x == -1 || z == -1)
	{

	dprintf(STDERR_FILENO, "Error: cant read file %s", argv[1]);
	free(p);
	exit(98);
	}

	q = write(y, p, z);
	if (y == -1 || q == -1)
	{
	dprintf(STDERR_FILENO, "Error: cant write %s\n", argv[2]);
	free(p);
	exit(99);
	}

	z = read(x, p, 1024);
	y = open(argv[2], O_WRONLY | O_APPEND);

	} while (z > 0);

	free(p);
	close_file(x);
	close_file(y);

	return (0);
}

