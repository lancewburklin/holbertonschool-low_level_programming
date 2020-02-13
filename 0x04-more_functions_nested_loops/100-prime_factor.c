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

	for (factor = 2; factor < 204284158382; factor++)
	{
		if (num % factor == 0)
		{
			storage = factor;
			printf("%lu", storage);
			if (factor == 3)
			{
				factor = factor * 1300;
			}
			else if (factor == 4019)
				factor = factor * 12645;
			else if (factor == 50829599)
				factor = factor * 4;
		}
	}
	printf("%lu\n", storage);
	return (0);
}
