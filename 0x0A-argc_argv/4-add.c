#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Multiples two numbers
 * @argc: Number of arguments
 * @argv: Numbers entered
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
