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
	int i, j, n, c;
	int flag = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (n = 1; n < argc; n++)
	{
		for (c = 0; argv[n][c] != '\0'; c++)
		{
			if (isdigit(argv[n][c]))
				flag = 1;
		}
		if (flag == 0)
		{
			printf("%d\n", 0);
			return (0);
		}
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
