#include "main.h"

/**
 * main - copies the contents of one file to another file
 * @argc: The argument count to main
 * @argv: An array of strings of arguments to main
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t ret_read, ret_write;
	char buffer[BUFSIZE];

	if (argc < 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		dprintf(2, "Error: Cant write to %s\n", argv[2]);
		exit(99);
	}
	while ((ret_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		ret_write = write(fd_to, buffer, ret_read);
		if (ret_write < 0)
		{
			dprintf(2, "Error: Cant write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (ret_read < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_descriptor(fd_from);
	close_descriptor(fd_to);
	return (0);
}
/**
 * close_descriptor - closes a file descriptor
 * @fd: A file descriptor
 *
 * Return: Nothing.
 */
void close_descriptor(int fd)
{
	int close_ret;

	close_ret = close(fd);
	if (close_ret < 0)
	{
		dprintf(2, "Error: Cant close fd %i\n", fd);
		exit(100);
	}
}
