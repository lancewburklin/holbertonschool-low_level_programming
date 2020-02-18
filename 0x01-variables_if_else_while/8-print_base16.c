#include <stdio.h>

/**
 * main - Print base 16
 *
 * Return: 0, as always
 */

int main(void)
{
	int lett;

	for (lett = 48; lett < 58; lett++)
		putchar(lett);
	for (lett = 97; lett < 103; lett++)
		putchar(lett);
	putchar(10);
	return (0);
}
