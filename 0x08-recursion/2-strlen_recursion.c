#include "holberton.h"

/**
 * _strlen_recursion - Find string length recursively
 * @s: String
 *
 * Return: An interger lul
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = 0;
		i = _strlen_recursion(s + 1);
	}
	if (*s == '\0')
		i--;
	return (i + 1);
}
