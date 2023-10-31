#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: Pointer to the name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters it could read and print,
 * or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, bytes_read, bytes_written;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	close(fd);
	free(buf);

	if (bytes_read != bytes_written)
		return (0);

	return (bytes_read);
}

