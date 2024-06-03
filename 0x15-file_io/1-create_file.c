#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file to be created
 * @text_content: String to be written to the file
 *
 * Return: 1 on success or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fl, bytes_wrt, i = 0;

	if (!filename)
		return (-1);
	fl = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (!fl)
		return (-1);
	if (text_content != NULL)
	{
		while(text_content[i])
			i++;
		bytes_wrt = write(fl, text_content, i);
		if (bytes_wrt == -1)
		{
			close(fl);
			return (-1);
		}
	}
	close(fl);

	return (1);	
}
