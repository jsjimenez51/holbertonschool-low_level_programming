#include "holberton.h"

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file.
 * @text_content: the NULL terminated string to add at the end of a file.
 *
 * Return: 1 on success and -1 on failure or filename is NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, scribe, ct = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content == NULL)
		return (1);

	if (fd == -1)
		return (-1);

	while (text_content[ct])
		ct++;

	scribe = write(fd, text_content, ct);

	if (scribe == -1)
		return (-1);

	close(fd);
	return (1);
}
