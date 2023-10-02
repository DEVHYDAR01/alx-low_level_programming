#include "main.h"
/**
 * read_textfile - This function will read a text of a file and
 * print it to the POSIX standard output
 * @filename: This is the type character of the filename
 * @letters: This is the type size_t letters
 * Return: if cannot be oppened or read 0, if is NULL 0, if writes fail 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fk;
	ssize_t rk, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fk = open(filename, O_RDONLY);
	if (fk == -1)
	{
		free(buf);
		return (0);
	}
	rk = read(fk, buf, letters);
	if (rk == -1)
	{
		free(buf);
		close(fk);
		return (0);
	}
	close(fk);
	wr = write(STDOUT_FILENO, buf, rk);
	if (wr == -1)
	{
		free(buf);
		return (0);
	}
	if (wr != rk)
		return (0);
	return (rk);
}
