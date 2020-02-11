#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints to 98
 * @n: Any natural interger
 *
 * Return: Those ugly socks
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(" ,");
		}
		putchar(10);
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(" ,");
		}
		putchar(10);
	}
}
