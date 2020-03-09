#include <stdio.h>
#ifndef test
#define test __FILE__
#endif

/**
 * main - prints the original file name
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", test);
	return (0);
}
