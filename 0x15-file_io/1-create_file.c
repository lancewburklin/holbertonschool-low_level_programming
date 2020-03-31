#include "holberton.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file
 * @text_content: Text to put in the file
 *
 * Return: 1 on success, -1 for a fail
 */

int create_file(const char *filename, char *text_content)
{
	int newfile, i = 0;
	char filewrite;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	if (access(filename, F_OK) != -1)
		newfile = open(filename, O_TRUNC | O_WRONLY);
	else
		newfile = open(filename, O_CREAT | O_WRONLY, 0600);
	if (newfile == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	filewrite = write(newfile, text_content, i);
	if (filewrite == -1)
		return (-1);
	close(newfile);
	return (1);
}
