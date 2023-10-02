#include "main.h"
/**
 * append_text_to_file - This function is such that it will
 * append text at the end to the  file
 * @filename: This is the filename to open and append a file or in
 * @text_content: This is a NULL terminated string to add
 * Return: 1 on success, -1 if the file can not be created, nor written,
 * nor write fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fds, fdk, len = 0;

	if (filename == NULL)
		return (-1);

	fds = open(filename, O_RDWR | O_APPEND);
	if (fds < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fds);
		return (1);
	}

	while (*(text_content + len))
		len++;

	fdk = write(fds, text_content, len);
	close(fds);
	if (fdk < 0)
		return (-1);

	return (1);
}
