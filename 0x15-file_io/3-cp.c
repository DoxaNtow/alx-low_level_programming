#include "main.h"

#define BUFFER_SIZE 1024
/**
 * error_exit - exit error
 * @message: error message
 * @code: error code
 */
void error_exit(const char *message, int code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

/**
 * main - Copies content of a file to another file.
 * @argc: The number of arguments passed.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int from = open(argv[1], O_RDONLY);
	int to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	char buffer[BUFFER_SIZE];
	ssize_t r, w;

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);


	if (from == -1)
		error_exit("Can't read from file_from", 98);


	if (to == -1)
		error_exit("Can't write to file_to", 99);


	while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
	{
	w = write(to, buffer, r);
	if (w == -1)
		error_exit("Can't write to file_to", 99);
	}

	if (r == -1)
	error_exit("Can't read from file_from", 98);

	close(from);
	close(to);

	return (0);
}

