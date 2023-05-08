#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @str: pointer to the string to be measured.
 * Return: length of string.
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str && *str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res;
	size_t len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	len = _strlen(text_content);
	res = write(fd, text_content, len);
	if (res == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
