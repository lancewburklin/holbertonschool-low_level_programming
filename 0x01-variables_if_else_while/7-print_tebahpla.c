#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	int lett;

	for (lett = 122; lett > 96; lett--)
		putchar(lett);
	putchar(10);
	return (0);
}
