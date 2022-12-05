#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file to append text to
 * @text_content: text to append
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String length
*/
int _strlen(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	return (x);
}
