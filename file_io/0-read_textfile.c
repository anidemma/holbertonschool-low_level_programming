#include "main.h"
/**
 * read_textfile - function
 * @filename: name of file
 * @letters: variable
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *a;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	a = malloc(letters * sizeof(char));
	if (!a)
		return (0);

	r = read(fd, a, letters);
	w = write(STDOUT_FILENO, a, r);

	free(a);
	close(fd);
	return (w);
}
