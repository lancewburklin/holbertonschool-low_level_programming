#include "holberton.h"

/**
 * append_text_to_file - Appends a file
 * @filename: Name of the file to append
 * @text_content: Content to append
 *
 * Return: 1 if file exists, -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int flag = 0;
	int newfile, i = 0;
	char writefile;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		flag = 1;
	newfile = open(filename, O_APPEND | O_WRONLY);
	if (newfile == -1)
		return (-1);
	if (flag == 1)
		return (1);
	while (text_content[i] != '\0')
		i++;
	writefile = write(newfile, text_content, i);
	if (writefile == -1)
		return (-1);
	close(newfile);
	return (1);
}
