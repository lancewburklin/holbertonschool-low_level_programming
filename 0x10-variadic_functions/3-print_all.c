#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - Prints everything given to it
 * @format: The format for the input
 * @...: The input
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, n = 0;
	char *separator = "";
	funstruct ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		n = 0;
		while (n < 4)
		{
			if (format[i] == *(ops[n]).dat)
			{
				printf("%s", separator);
				ops[n].f(args);
				separator = ", ";
			}
			n++;
		}
		i++;
	}
		printf("\n");
		va_end(args);
}

/**
 * op_char - Prints a char
 * @args: The thing to print
 *
 * Return: void
 */

void op_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * op_int - Prints an interger
 * @args: The arguments to print
 *
 * Return: void
 */

void op_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * op_string - Print a string
 * @args: The argument to print
 *
 * Return: Nada
 */

void op_string(va_list args)
{
	char *argsstrng = va_arg(args, char *);

	if (argsstrng == NULL)
	{
		argsstrng = "(nil)";
	}
	printf("%s", argsstrng);
}

/**
 * op_float - Prints a float
 * @args: Argument
 *
 * Return: Nada
 */

void op_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
