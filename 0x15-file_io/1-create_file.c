#include "main.h"

/**
 * create_file - function to create files
 *
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd, fb, ln = 0;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ln = strlen(text_content);
	}

	fb = write(fd, text_content, ln);
	if (fb == -1)
		return (-1);

	return (1);
}
