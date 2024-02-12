#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @content:NULL terminated string
 * Return; return 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int len, res;
	ssize_t f_write;

	if (filename == NULL)
		return (-1);
	res = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (res < 0)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (*(text_content + len) != 0)
			len++;
		f_write = write(res, text_content, len);
		if (f_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(res);
	return (0);
}


