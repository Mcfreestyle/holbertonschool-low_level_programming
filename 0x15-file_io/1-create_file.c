#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nbytes, wr_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	nbytes = strlen(text_content);
	wr_bytes = write(fd, text_content, nbytes);
	if (wr_bytes < 0)
		return (-1);

	return (1);
}
