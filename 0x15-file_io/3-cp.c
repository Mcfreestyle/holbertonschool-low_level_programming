#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * exit_98 - exits the program because the return of open or read is negative
 * @file_from: source file
 */
void exit_98(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
 * exit_99 - exits the program because the return of open or write is negative
 * @file_to: destiny file
 */
void exit_99(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
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
	if (fd1 < 0)
		exit_98(file_from);

	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
		exit_99(file_to);

	for (rbytes = read(fd1, buff, 1024); rbytes; rbytes = read(fd1, buff, 1024))
	{
		if (rbytes < 0)
			exit_98(file_from);
		wbytes = write(fd2, buff, rbytes);
		if (wbytes < 0)
			exit_99(file_to);
	}

	if (rbytes < 0)
		exit_98(file_from);

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
