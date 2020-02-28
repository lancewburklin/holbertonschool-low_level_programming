#include <stdio.h>

/**
 * main - Prints arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Absolutely nothing
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
