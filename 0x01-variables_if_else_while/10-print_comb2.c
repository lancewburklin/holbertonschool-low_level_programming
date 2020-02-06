#include <stdio.h>

/**
 * main - print plenty of numbers
 *
 * Return: ALways 0
 */

int main(void)
{
	int o;
	int p;

	for (o = 48; o < 58; o++)
	{
		for (p = 48; p < 58; p++)
		{
			putchar(o);
			putchar(p);
			if (o != '9' || p != '9')
			{
			putchar(44);
			putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
