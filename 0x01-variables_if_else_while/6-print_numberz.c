#include <stdio.h>

/**
 * main - Print 0 to 9
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar(10);
	return (0);
}
