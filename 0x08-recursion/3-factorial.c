#include "holberton.h"

/**
 * factorial - Finds factorials
 * @n: The number to find
 *
 * Return: The factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return 1;
	return (n * factorial(n - 1));
}
