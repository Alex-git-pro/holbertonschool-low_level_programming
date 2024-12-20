#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the filename
 * @text_content: a pointer to a string to write to the file
 * Return: the actual number of letters it could read and print
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
	return (-1);

	close(o);

	return (1);
}
