#include "holberton.h"

/**
 * print_binary - Prints a binary number
 * @n: The interger to translate
 *
 * Return: The interger in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 2147483648;
	int flag = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 || !(mask >> 1))
			_putchar('0');
		mask = mask >> 1;
	}
}
