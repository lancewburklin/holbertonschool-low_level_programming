#include "holberton.h"

/**
 * _sqrt_recursion - Find the square root
 * @n: The number
 *
 * Return: The square root
 */

int _sqrt_recursion(int n)
{
	int x;

	x = _test(n, 0);
	return (x);
}

/**
 * _test - Test the numbers
 * @num: The original number
 * @test: number being tested
 *
 * Return: The square root
 */

int _test(int num, int test)
{
	if (test * test == num)
	{
		return (test);
	}
	if (test * test > num)
		return (-1);
	return (_test(num, test + 1));
}
