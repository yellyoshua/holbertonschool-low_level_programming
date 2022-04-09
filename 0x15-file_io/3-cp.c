#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argv: argument 1
 * @argc: argument 2
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int forigin, fdest, rd, close_Forigin, close_Fdest;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	forigin = open(argv[1], O_RDONLY);
	if (forigin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((rd = read(forigin, buff, BUFSIZ)) > 0)
		if (fdest == -1 || (write(fdest, buff, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_Forigin = close(forigin);
	close_Fdest = close(fdest);
	if (close_Forigin == -1 || close_Fdest == -1)
	{
		if (close_Forigin == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", forigin);
		else if (close_Fdest == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdest);
		exit(100);
	}
	return (0);
}
