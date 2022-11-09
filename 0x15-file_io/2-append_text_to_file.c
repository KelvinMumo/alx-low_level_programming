#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: file to open and append to
 * @text_content: text to append to file
 *
 * Return: 1 on success, -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
