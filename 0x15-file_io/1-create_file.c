#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file and writes the given content to it.
 * @filename: Name of the file to create.
 * @text_content: Content to write to the file.
*
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		written = write(fd, text_content, len);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
