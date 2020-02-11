#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 * @x: Any input
 *
 * Return: Last digit of the number.
 */

int print_last_digit(int x)
{
	int y = 10 % x;
	if (y < 0)
		y = -y;
	_putchar(y + '0');
		return (y);
}
