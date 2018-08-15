#include "holberton.h"

/**
 * main - copies contents of one file to another file.
 * @argc: number of arguments passed.
 * @argv: list of arguments passed.
 *
 * Return: 0 success, 98 read error, 99 write error, 100 close error.
 */
int main(int argc, char **argv)
{
	char buff[1024];
	int file1, file2, rdr = 1024, scribe;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (rdr == 1024)
	{
		rdr = read(file1, buff, 1024);
		if (rdr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		scribe = write(file2, buff, rdr);
		if (scribe == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(file1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}
