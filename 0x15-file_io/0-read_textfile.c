#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * It to the POSIX standard output.
 * @filename: pointer to a character
 * @letters: the number of letters it should read and print
 *
 * Return: 0 or -1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
