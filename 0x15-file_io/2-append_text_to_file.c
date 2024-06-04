#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to be added at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wrt, len = 0;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
		wrt = write(op, text_content, len);
		if (wrt != len)
			return (-1);
	}
	close(op);

	return (1);
}
