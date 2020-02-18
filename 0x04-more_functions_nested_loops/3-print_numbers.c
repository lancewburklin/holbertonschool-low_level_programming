#include "holberton.h"

/**
 * print_numbers - Prints 0 to 9
 *
 * Return: 42
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);
	_putchar(10);
}
