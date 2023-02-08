#include "main.h"

/**
 * main - Entry point.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 if process ends without errors.
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file_from(argv[1]);
	fd_to = open_file_to(argv[2], fd_from);

	do {
		bytes_read = read(fd_from, buf, 1024);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", argv[1]);
			exit_safe(fd_from, fd_to, 98);
		}
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't write to ", argv[2]);
			exit_safe(fd_from, fd_to, 99);
		}
	} while (bytes_read == 1024);

	exit_safe(fd_from, fd_to, 0);
	return (0);
}

/**
 * close_fd - close file descriptors safely, exit if an error occurs.
 * @fd: file descriptor.
 *
 * Return: void.
*/
void close_fd(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "%s%d\n", "Error: Can't close fd ", fd);
		exit(100);
	}
}

/**
 * open_file_from - open the file to copy from.
 * @file_from: Name of the file to open.
 *
 * Return: File descriptor of opened file to copy from.
*/
int open_file_from(char *file_from)
{
	int fd;

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", file_from);
		exit(98);
	}
	return (fd);
}

/**
 * open_file_to - open the file to copy to.
 * @file_to: Name of file to open.
 * @fd_from: File descriptor of the file to copy from.
 *
 * Return: File dexcriptor of the opened file to copy to.
*/
int open_file_to(char *file_to, int fd_from)
{
	int fd, flags;
	mode_t mode;

	flags = O_WRONLY | O_CREAT | O_TRUNC;
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd = open(file_to, flags, mode);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't write to ", file_to);
		close_fd(fd_from);
		exit(99);
	}

	return (fd);
}

/**
 * exit_safe - safely exit by closing all open file descriptors
 * and freeing memory of the buffer.
 * @fd_from: File descriptor of file to copy from.
 * @fd_to: File descriptor of file to copy to.
 * @status: exit code.
 *
 * Return: Void.
*/
void exit_safe(int fd_from, int fd_to, int status)
{
	close_fd(fd_from);
	close_fd(fd_to);
	exit(status);
}
