#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * validation_open - validates the open system call
 * @fd1: file descriptor to source file
 * @fd2: file descriptor to destiny file
 */
void validation_open(int fd1, int fd2)
{
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
}

/**
 * copy_content - copies the content of a file to another file
 * @file_from: source file
 * @file_to: destiny file
 */
void copy_content(char *file_from, char *file_to)
{
	char buff[1024];
	int fd1, fd2, rbytes, wbytes;


	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	validation_open(fd1, fd2);

	for (rbytes = read(fd1, buff, 1024); rbytes; rbytes = read(fd1, buff, 1024))
		wbytes = write(fd2, buff, rbytes);

	if (rbytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (wbytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 * main - check the code
 * @ac: number of arguments
 * @av: values of the arguments
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_content(av[1], av[2]);
	return (0);
}
