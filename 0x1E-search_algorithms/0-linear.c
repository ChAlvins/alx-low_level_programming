#include "search_algos.h"

/**
 * linear_search - searches value in array of integers using Linear search algo
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the value into the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if ((array == NULL) || (size <= 0))
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
