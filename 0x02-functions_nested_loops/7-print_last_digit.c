#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 * @x: Any input
 *
 * Return: Last digit of the number.
 */

int print_last_digit(int x)
{
	_putchar(x % 10 + '0');
		return (x % 10);
}
