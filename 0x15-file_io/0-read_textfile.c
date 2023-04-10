#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * @filename: name of the file
 * @letters: number of letters shouls read and print
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t n_read, n_written, total_written = 0;
	char *c;

	if (filename == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);

	c = malloc(sizeof(char) * (letters + 1));
	if (c == NULL)
	{
		close(i);
		return (0);
	}

	n_read = read(i, c, letters);
	if (n_read == -1)
	{
		free(c);
		close(i);
		return (0);
	}

	n_written = write(STDOUT_FILENO, c, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(c);
		close(i);
		return (0);
	}

	total_written += n_written;

	free(c);
	close(i);

	return (total_written);
}
