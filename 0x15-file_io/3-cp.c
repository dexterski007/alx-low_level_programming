#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void cl(int fln);
char *buffy(char *filename);

/**
 * buffy - buffer
 *
 * @buff: buffer
 *
 * Return: buffer
*/

char *buffy(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}

/**
 * cl - close file
 *
 * @buff: buffer
*/

void cl(int fln)
{
	int fc;

	fc = close(fln);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fln);
		exit(100);
	}
}

/**
 * main - cp from file to file
 *
 * @ac: num of args
 * @av: arguments
 *
 * Return: 0
*/

int main(int ac, char **av)
{
	int fwr, fre, orig, dest;
	char *buffe;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffe = buffy(av[2]);
	orig = open(av[1], O_RDONLY);
	fre = read(orig, buffe, 1024);
	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while(fre > 0)
	{
		if (orig == -1 || fre == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			free(buffe);
			exit(98);
		}
		fwr = write(dest, buffe, fre);
		if (dest == -1 || fwr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			free(buffe);
			exit(99);
		}
		fre = read(orig, buffe, 1024);
		dest = open(av[2], O_WRONLY | O_APPEND);
	}
	free(buffe);
	cl(orig);
	cl(dest);
	return (0);
}

