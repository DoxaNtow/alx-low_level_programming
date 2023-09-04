#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: A pointer to name of file.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: -1 if function fails and 1 if otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(file_desc, text_content, length);

	if (file_desc == -1 || bytes_written == -1)
	return (-1);

	close(file_desc);

	return (1);
}

