#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: name of the file to be created
 * @text_content: content to append into the file
 * Return: 1 on success, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, sz_wr, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		sz_wr = write(fd, text_content, len);
		if (sz_wr < 0)
			return (-1);

		close(fd);
		return (1);
	}
	return (-1);
}
