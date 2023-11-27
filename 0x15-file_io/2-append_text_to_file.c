#include "main.h"

/**
 * append_text_to_file - append text to an existing file
 *
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fb, ln = 0;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ln = strlen(text_content);
	}

	fb = write(fd, text_content, ln);
	if (fb == -1)
		return (-1);

	close(fd);

	return (1);
}
