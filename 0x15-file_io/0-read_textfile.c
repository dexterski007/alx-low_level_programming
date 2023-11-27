#include "main.h"

/**
 * read_textfile - function to read
 *
 * @filename: filename
 * @letters: letters
 *
 * Return: number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fw, fr, fo;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fo = open(filename, O_RDONLY);
	fr = read(fo, buff, letters);
	fw = write(STDOUT_FILENO, buff, fr);


	if ((fo == -1) | (fr == -1) || (fw == -1) || (fw != fr))
	{
		free(buff);
		close(fo);
		return (0);
	}

	free(buff);
	close(fo);

	return (fw);
}
