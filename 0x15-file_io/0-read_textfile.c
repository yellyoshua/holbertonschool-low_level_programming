#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, rd, pf;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rd = read(file_d, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[rd] = '\0';
	close(file_d);

	pf = write(STDOUT_FILENO, buffer, rd);
	if (pf == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (pf);
}
