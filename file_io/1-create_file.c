#include "main.h"
/**
 * create_file - function
 * @filename: filename
 * @text_content: content
 * Return: 1 , -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, fd, w;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		w = write(fd, text_content, len);
		if (w == -1 || w != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
