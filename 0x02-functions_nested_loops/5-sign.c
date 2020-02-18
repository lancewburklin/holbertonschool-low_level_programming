#include "holberton.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Any input
 *
 * Return: 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
