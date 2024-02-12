#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - read text file and output it on posix
 * @filename: file pointer
 * @letters:letters to print
 * Return:number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	file *ptr;
	char buffer;
	char buflen = 0;

	if (ptr == NULL)
		return (0);
	ptr = fopen("filename", "r");
	while ((letters = getline(&buffer, &buflen, ptr)) != -1)
	{
		fwrite(buffer, sizeof(char), letters, stdout);
	}
	free(buffer);
	return (0);
}

