#include "main.h"
/**
 * create_file - creates the file
 * @filename: the file name created
 * @text_content: content of write in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, s, j;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);

	if (text_content)
	{
		j = 0;
			while (text_content[j] != '\0')
				j++;
		s = write(i, text_content, j);

		if (s == -1)
		{
			close(i);
			return (-1);
		}
	}

	close(i);
	return (1);
}

