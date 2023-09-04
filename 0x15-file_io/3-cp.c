#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - creates 1024 bytes for a buffer.
 * @file: name of file storing chars
 *
 * Return: A pointer
 */
char *create_buffer(char *file)
{
	char *file_buffer;

	file_buffer = malloc(sizeof(char) * 1024);

	if (file_buffer == NULL)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
	}

	return (file_buffer);
}

/**
 * close_file - quit file descriptors.
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	int close_status;

	close_status = close(fd);

	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents from one file to another
 * @argc: no. of arguments passed
 * @argv: array of pointers
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int from, to, read_result, write_result;
	char *file_buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	read_result = read(from, file_buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (from == -1 || read_result == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
		free(file_buffer);
		exit(98);
	}

	write_result = write(to, file_buffer, read_result);
	if (to == -1 || write_result == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
		free(file_buffer);
		exit(99);
	}

	read_result = read(from, file_buffer, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_result > 0);

	free(file_buffer);
	close_file(from);
	close_file(to);

	return (0);
}



