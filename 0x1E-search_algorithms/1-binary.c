#include "search_algos.h"
/**
 * binary_search - Using binary search on an array
 * @array: Array to search
 * @size: Size of the array to search
 * @value: Value to search for
 *
 * Return: Location of value or -1 on fail
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int mid, i = 0, start = 0, end = size - 1;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		mid = (start + end) / 2;
		i = start;
		printf("Searching in array: ");
		printf("%d", array[i]);
		while (i < end)
		{
			i++;
			printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			start = mid + 1;
		if (value < array[mid])
			end = mid - 1;
	}
	return (-1);
}
