#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to append text.
 * @text_content: Text to append.
 *
 * Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int flags, num, fd;

	if (!filename)
		return (-1);

	flags = O_WRONLY | O_APPEND;

	fd = open(filename, flags);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	num = write(fd, text_content, strlen(text_content));
	if (num == -1)
		return (-1);

	close(fd);
	return (1);
}
