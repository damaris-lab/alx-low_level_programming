#include "main.h"
/**
 * append_text_to_file - appends text to end of the file
 * @filename: name of file
 * @text_content: text to append
 * Return: 1(success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int res;
	ssize_t len, f_write;

	if (filename == NULL)
		return (-1);
	res = open(filename, O_WRONLY | O_APPEND);
	if (res < 0)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		f_write = write(res, text_content, len);
		if (f_write < 0)
		{
			close(res);
			write(STDOUT_FILENO, "fails", 6);
			return (-1);
		}
	}
	close(res);
	return (1);
}
