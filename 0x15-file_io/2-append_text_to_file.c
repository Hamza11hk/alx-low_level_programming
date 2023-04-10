#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the appended file name
 * @text_content: the appended content to the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, bw, j = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);

	if (text_content)
	{
		bw = write(i, text_content, j);
		if (bw == -1 || bw != j)
		{
			close(i);
			return (-1);
		}
	}

	close(i);
	return (1);
}
