#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, sz;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (filename == NULL || buff == NULL)
	{
		free(buff);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	sz = read(fd, buff, letters);
	if (sz < 0)
		return (0);
	buff[sz] = '\0';
	write(STDOUT_FILENO, buff, sz);
	close(fd);
	free(buff);
	return (sz);
}

