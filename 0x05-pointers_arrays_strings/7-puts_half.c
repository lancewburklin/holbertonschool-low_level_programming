#include "holberton.h"

/**
 * puts_half - Puts half of the string
 * @str: The string to be inputed
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int i = 0;
	int k;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 1)
		i++;
	for (k = i / 2; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar(10);
}
