#include "main.h"

/**
 *read_textfile-function that reads a text file and prints it to the POSIX
 *@filename: file
 *@letters: file
 *
 *Return:z
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *no;

	x = open(filename, O_RDONLY);

	if (x == -1)
	{
		return (0);
	}
	no = malloc(sizeof(char) * letters);

	y = read(x, no, letters);
	z = write(STDOUT_FILENO, no, y);
	free(no);
	close(x);
	return(z);
}

