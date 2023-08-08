#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - Creats a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, f_len, f_close;

	f_len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[f_len])
			f_len++;
		write(file, text_content, f_len);
	}

	f_close = close(file);
	if (f_close == -1)
		return (-1);
	
	return (1);
}
