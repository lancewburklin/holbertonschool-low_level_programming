#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 * @x: Any input
 *
 * Return: Last digit of the number.
 */

int print_last_digit(int x)
{
	putchar(x % 10);
		return (x % 10);
}
