#include "main.h"
/**
 * read_textfile - Reads a text file and prints to the POSIX std output
 * @filename: string to be read and printed
 * @letters: Number of letters to be read and printed
 *
 * Return: Actual number of letters read and printed
 * or 0 if the file cannot be opened or read or 0 if {filename} is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int content;
	ssize_t bytes_rd, bytes_wrt;
	char *buffer;

	if (!filename)
		return (0);
	content = open(filename, O_RDONLY);
	if (content == -1)
		return (0);
	buffer = (char *)malloc(letters);
	if (!buffer)
	{
		close(content);
		return (0);
	}
	bytes_rd = read(content, buffer, letters);
	if (bytes_rd == -1)
	{
		free(buffer);
		close(content);
		return (0);
	}

	bytes_wrt = write(STDOUT_FILENO, buffer, bytes_rd);
	if (bytes_wrt == -1 || bytes_wrt != bytes_rd)
	{
		free(buffer);
		close(content);
		return (0);
	}
	free(buffer);
	close(content);

	return (bytes_wrt);
}
