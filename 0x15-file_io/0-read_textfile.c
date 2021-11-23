#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

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
	char buff[10000];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	sz = read(fd, buff, letters);
	buff[sz] = '\0';
	printf("%s", buff);
	close(fd);
	return (sz);
}

