#include "holberton.h"
#define saver ("Error: Can't close fd %d\n")
/**
 * main - Copies info from one file to another
 * @argc: Number of arguments
 * @argv: Arguemnts, stored as strings
 *
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	int openfilefrom, openfileto, buflen;
	char buf[1024];

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	openfilefrom = open(argv[1], O_RDONLY);
	if (openfilefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	openfileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (openfileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((buflen = read(openfilefrom, buf, 1024)) > 0)
	{
		if (write(openfileto, buf, buflen) != buflen)
			{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
	}
		if ((close(openfilefrom)) == -1)
		{
			dprintf(STDERR_FILENO, saver, openfilefrom);
			exit(100);
		}
		if ((close(openfileto)) == -1)
		{
			dprintf(STDERR_FILENO, saver, openfileto);
			exit(100);
		}
	return (1);
}
