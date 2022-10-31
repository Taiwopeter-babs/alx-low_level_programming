#include "main.h"
/**
 * read_textfile - reads a textfile and prints the content to stdout
 * @filename: name of the file to be read and printed
 * @letters: number of bytes of letters to read and print
 * Return: actual number of letters, otherwise 0 (for error cases)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, sz_read;
	char *ch_buf;

	if (filename == NULL)
		return (0);

	ch_buf = malloc(sizeof(char) * letters);
	if (ch_buf == NULL)
	{
		free(ch_buf);
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);

	sz_read = read(fd, (void *)ch_buf, letters);
	if (sz_read < 0)
		return (0);
	ch_buf[sz_read] = '\0';

	write(STDOUT_FILENO, ch_buf, letters);
	if (sz_read < 0)
		return (0);

	close(fd);
	return (sz_read);
}
