#include "main.h"

/**
 * create_file - creates a file.
 * @filename: Name of the file to create.
 * @text_content: Text to write in the created file.
 *
 * Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	mode_t mode;
	int fd, num, flags;

	if (!filename)
		return (-1);

	flags = O_WRONLY | O_CREAT | O_TRUNC;
	mode = S_IRUSR | S_IWUSR;

	fd = open(filename, flags, mode);
	if (fd == -1)
		return (-1);

	num = write(fd, text_content, strlen(text_content));
	if (num == -1)
		return (-1);

	close(fd);
	return (1);
}
