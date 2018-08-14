#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file the file to be printed.
 * @letters: the number of letters it should read and print.
 *
 * Return: number of letters it could read and print, 0 if file cannot be
 * opened, or filename is NULL, or write fails and does not write expected
 * number of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, rd, scribe;

	if (!filename)
		return (0);

	buff = malloc(letters);
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	rd = read(fd, buff, letters);

	if (rd == -1)
	{
		free(buff);
		return (0);
	}
	close(fd);

	scribe = write(STDOUT_FILENO, buff, rd);

	if (scribe != rd || scribe == -1)
	{
		free(buff);
		return (0);
	}

	free(buff);
	return (scribe);
}
