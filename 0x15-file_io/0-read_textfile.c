#include "main.h"

/**
 * read_textfile - reads a text file and,
 * prints it to POSIX standard output
 *
 * @filename: pointer to the name of the file
 * @letters: number of letters the function should read and print
 *
 * Return: if filename is NULL, return 0
 * if write fails, return 0
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (fd == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (wr);
}
