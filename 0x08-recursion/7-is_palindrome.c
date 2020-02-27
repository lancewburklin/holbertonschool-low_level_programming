#include "holberton.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string
 *
 * Return: 1 if true 0 if false
 */

int is_palindrome(char *s)
{
	int c = 0;
	int i = 0;
	int x;

	i = _get_len(s);
	i--;
	if (i <= 0)
		return (1);
	x = my_tester(s, i, c);
	return (x);
}

/**
 * _get_len - Get length
 * @s: The string
 *
 * Return: Length
 */

int _get_len(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_get_len(s) + 1);
	}
	return (0);
}

/**
 * my_tester - Tests a string
 * @strng: String to search
 * @len: Max length of string
 * @counter: Just a counter
 *
 * Return: Result
 */

int my_tester(char *strng, int len, int counter)
{
	if (*strng == strng[len] && counter < len)
	{
		strng++;
		len -= 2;
		counter++;
		return (my_tester(strng, len, counter));
	}
	if (*strng == strng[len])
		return (1);
	else
		return (0);
}
