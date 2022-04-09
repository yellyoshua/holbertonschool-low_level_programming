#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file
 * @text_content: the content of the file
 * Return: Always 0
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, pf, len;

	if (filename == NULL)
		return (-1);

	len = 0;
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);

	pf = write(file_d, text_content, len);
	if (pf == -1)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
