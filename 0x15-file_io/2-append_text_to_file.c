#include "main.h"

/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: pointer
 *@text_content: string
 *return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
	for (z = 0; text_content[z];)
	z++;
	}
	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, z);

	if (x == -1 || y == -1)
		return (-1);
	close(x);

	return (1);
}

