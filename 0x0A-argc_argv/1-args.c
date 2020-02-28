#include <stdio.h>

/**
 * main - Prints the number of arguments inputed
 * @argc: The argument count
 * @argv: The array containing arguments
 *
 * Return: 0, as always...
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
