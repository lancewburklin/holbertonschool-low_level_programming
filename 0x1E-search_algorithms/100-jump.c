#include "search_algos.h"

/**
* jump_search - Serching and jumping
* @array: Array to search
* @size: Size of the array
* @value: Value to search
*/

int jump_search(int *array, size_t size, int value)
{
	unsigned int step = sqrt(size);
	unsigned int count = 0, i = 0;

	if (array == NULL)
		return (-1);
	while (count < size - step)
	{
		printf("Value checked array[%d] = [%d]\n", count, array[count]);
		if (array[count] <= value && value <= array[count + step])
			break;
		count += step;
	}
	if (count > size - step)
		printf("Value checked array[%d] = [%d]\n", count, array[count]);
	i = count;
	printf("Value found between indexes [%d] and [%d]\n",
	       count, count + step);
	while (i <= count + step && i < size)
	{
		printf("Value checked array[%d] = [%d]\n",
		       i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return(-1);
}
