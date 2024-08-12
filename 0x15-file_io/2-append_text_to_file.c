#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
*append_text_to_file - function to append
*@filename: name of file
*@text_content: text_content
*Return: 1 or -1 in fail:wq
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, appended, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		appended = write(fd, text_content, len);
		if (appended == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
