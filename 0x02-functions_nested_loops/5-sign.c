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
		putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
}
