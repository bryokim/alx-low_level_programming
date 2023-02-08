#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: name of the file.
 * @letters: number of letters it should read and print.
 *
 * Return: Number of letters written, or 0 if an error occurs.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t num, bytes_written;
	int fd;

	if (!filename)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (!buff)
		return (0);

	memset(buff, 0, letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	num = read(fd, buff, letters);
	if (num == -1)
	{
		free(buff);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buff, num);
	if (bytes_written == -1 || bytes_written != num)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (num);
}
