#include <stdio.h>

/**
 * main - Print the alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	int lett;
	int letts;
		for (lett = 97; lett <= 122; lett++)
			putchar (lett);
		for (letts = 65; letts <= 90; letts++)
			putchar (letts);
	putchar (10);
		return (0);
}
