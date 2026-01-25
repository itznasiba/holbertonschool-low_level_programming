#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file and writes text to it
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;        /* file descriptor */
	ssize_t w;     /* bytes written */
	size_t len = 0;

	/* filename cannot be NULL */
	if (filename == NULL)
		return (-1);

	/* open file with:
	 * O_CREAT  -> create if it doesn't exist
	 * O_WRONLY -> write only
	 * O_TRUNC  -> truncate if it exists
	 * permissions: rw------- (0600)
	 */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, write it to the file */
	if (text_content != NULL)
	{
		/* calculate length of text_content */
		while (text_content[len] != '\0')
			len++;

		w = write(fd, text_content, len);
		if (w != (ssize_t)len) /* write fails */
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
