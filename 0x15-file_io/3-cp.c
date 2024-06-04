#include "main.h"

/**
 * main - Copies the content of a file to another file
 *
 * Return: 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, r, w, cl_r, cl_w;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (!argv[1] || fd_r == -1)
        {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_w == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		       	close(fd_r);
			exit(99);
		}

	while ((r = read(fd_r, buff, 1024)) > 0)
	{
		w = write(fd_w, buff, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			close(fd_w);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_r);
		close(fd_w);
		exit(98);
	}
	cl_r = close(fd_r);
	cl_w = close(fd_w);

	if (cl_r == -1 || cl_w == -1)
	{
		if (cl_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
			exit(100);
		}
		if (cl_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
			exit(100);
		}
	}
	return (0);
}
