#include <stdio.h>

/**
 * main - Print the alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	int lett;
		for (lett = 97; lett <= 122; )
		{
			if (lett != 101 && lett != 113)
			putchar (lett);
			lett++;
		}
	putchar (10);
		return (0);
}
