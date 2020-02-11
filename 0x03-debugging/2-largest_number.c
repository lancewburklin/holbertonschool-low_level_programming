#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (c > b && a > c)
			largest = a;
	}
	else if (b > a)
	{
		if (a > c)
			largest = a;
		if (c > a && b > c)
			largest = b;
	}
	else if (c > a)
	{
		if (a > b)
			largest = c;
		else if (b > a && c > b)
			largest = c;
	}

	return (largest);
}
