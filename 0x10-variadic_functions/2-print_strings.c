#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: The separator
 * @n: The number of strings
 * @...: The strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *nu;

	va_start(args, n);
	if (separator == NULL || n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		nu = va_arg(args, char *);
		if (nu == NULL)
			printf("(nil)");
		else
			printf("%s", nu);
		if (n - 1 != i)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
