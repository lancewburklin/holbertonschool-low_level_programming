#include "holberton.h"

/**
 * binary_to_uint - Translates decimal to binary
 * @b: String to translate
 *
 * Return: The converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int _strlen = 0;
	unsigned int mult = 1;
	unsigned int bnum = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[_strlen])
		_strlen++;
	while (_strlen >= 0)
	{
		if (b[_strlen] == '\0')
		{
			_strlen--;
			continue;
		}
		if (b[_strlen] == '0')
		{
			bnum = 0;
		}
		else if (b[_strlen] == '1')
		{
			bnum = 1;
		}
		else
		{
			return (0);
		}
		num = num + (bnum * mult);
		if (_strlen == -1)
			break;
		mult = mult * 2;
		_strlen--;
	}
	return (num);
}
