#include "main.h"
/**
 * create_file - This function is such that creates a file
 * @filename: This is the type of char to the
 * filename pointer of FD
 * @text_content: This is the type char pointer of char
 * Return: -1 if NULL in FN, 1 on sucess
 */
int create_file(const char *filename, char *text_content)
{
	int final_exit = 0;
	int  f = 0;
	int  x = 0;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + x) != '\0')
		{
			x++;
		}
		final_exit = write(f, text_content, x);
	}
	if (final_exit == -1 && final_exit != x)
		return (-1);
	return (1);
}
