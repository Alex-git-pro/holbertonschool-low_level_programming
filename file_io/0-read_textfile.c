#include "main.h"
/**
 * read_textfile - function that read Requiescat
 * @filename: pointer to the filename
 * @letters: the number of letters print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int fd;
	ssize_t nread;
	ssize_t nwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	nwrite = write(STDOUT_FILENO, buffer, nread);
	free(buffer);
	close(fd);

	if (nwrite != nread)
		return (0);

	return (nwrite);
}
