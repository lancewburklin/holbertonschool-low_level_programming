#include <stdio.h>

/**
 * main - Prints a factor
 *
 * Return: absolutely nothing
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long factor;
	unsigned long storage;

	for (factor = 2; factor < num; factor++)
	{
		while (num % factor == 0)
		{
			num = num / factor;
			storage = num;
		}
	}
	printf("%lu\n", storage);
	return (0);
}
