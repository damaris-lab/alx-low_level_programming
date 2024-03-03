#include "main.h"
/**
 * read_textfile - reads a textfilemand prints it the posix stdout
 * @filename: name of the file
 * @letters: number of letters to be read and print
 *
 * Return: number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t rbytes;
	ssize_t count;

	count = 0;

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		free(buf);
		return (0);
	}
	if (!filename)
	{
		free(buf);
		return (0);
	}
	else
		fd = open(filename, O_RDONLY);
	rbytes = read(fd, buf, letters);
	if (rbytes == -1 || fd == -1)
	{
		free(buf);
		return (0);
	}
	count = write(STDOUT_FILENO, buf, rbytes);
	if (count != rbytes || count == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (count);
}
