#include <stdio.h>

/**
 * main - Print 0 to 9
 *
 * Return: Probably 0
 */

int main(void)
{
	int o;

	for (o = 48; o < 58; o++)
	{
		putchar(o);
		if (o != 57)
		{
			putchar(44);
				putchar(32);
		}
	}
	putchar(10);
		return (0);
}
