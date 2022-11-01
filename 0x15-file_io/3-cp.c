#include "main.h"
/**
 * main - Entry point to function
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Description: This program copies the content of argv[1] into argv[2]
 * Return: 0 on success, otherwise exit with error code
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd_fr, fd_to;
	ssize_t rd_in, wr_out;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_fr = open(argv[1], O_RDONLY);
	rd_in = read(fd_fr, buffer, 1024);
	if (rd_in == -1 || fd_fr == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	wr_out = write(fd_to, buffer, rd_in);
	if (fd_to == -1 || wr_out == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
	exit(99);
	}

	if (close(fd_fr) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_fr);
		exit(100);
	}
	return (0);
}
