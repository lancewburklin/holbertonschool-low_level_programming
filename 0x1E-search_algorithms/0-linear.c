#include "search_algos.h"

/**
 * linear_search - Search for a number in an array linerally
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: Location of value or -1 on fail
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count = 0;
	int num;

	if (array == NULL)
		return (-1);
	while (count < size)
	{
		num = (int) count;
		printf("Value checked array[%d] = [%d]\n", num, array[count]);
		if (array[count] == value)
			return (num);
		count++;
	}
	return (-1);
}
