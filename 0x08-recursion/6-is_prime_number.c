#include "holberton.h"

/**
 * is_prime_number - Checks if the number is prime
 * @n: The number to be found
 *
 * Return: 1 if true 0 if not
 */

int is_prime_number(int n)
{
	int x;

	if (n <= 1)
		return (0);
	x = _check(n, 2);
	return (x);
}

/**
 * _check - Checks number
 * @num: original number
 * @test: The test number
 *
 * Return: Result
 */

int _check(int num, int test)
{
	if (num % test == 0 && test != num)
		test = 0;
	else if (test == num)
		return (1);
	if (test != num && test != 0)
		return (_check(num, test + 1));
	return (test);
}
