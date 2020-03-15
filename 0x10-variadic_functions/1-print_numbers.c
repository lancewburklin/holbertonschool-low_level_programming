#include "variadic_functions.h"

/**
 * print_numbers - Prints a list of numbers
 * @separator: The separator between numbers
 * @n: The number of numbers
 * @...: The numbers to print out
 *
 * Return: VOID
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (n - 1 != i && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
