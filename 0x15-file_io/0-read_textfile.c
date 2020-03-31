#include "holberton.h"

/**
 * read_textfile - Reads a text file
 * @filename: Name of the file
 * @letters: Number of letters to print
 *
 * Return: 0 on fail or the number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int newfile;
	char *buf;
	int buflen, count;

	if (filename == NULL || letters == 0)
		return (0);

	newfile = open(filename, 0);
	if (newfile == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	buflen = read(newfile, buf, letters);
	if (buflen == -1)
		return (0);

	if (buflen > 0)
		count = write(1, buf, buflen);
	if (count != buflen)
	{
		close(newfile);
		return (0);
	}
	close(newfile);
	free(buf);
	return (buflen);
}
