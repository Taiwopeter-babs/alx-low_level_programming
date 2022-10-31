#include "main.h"
/**
 * create_file - creates a text file and adds content
 * @filename: name of the file to be created
 * @text_content: content to write into the file
 * Return: 1 on success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, sz_wr, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	sz_wr = write(fd, text_content, len);
	if (sz_wr < 0)
		return (-1);

	close(fd);
	return (1);
}
