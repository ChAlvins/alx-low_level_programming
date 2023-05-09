#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first elemnt of the aray to search in
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the index of where the value is located in the array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, middle = 0, left = 0, right = size - 1;

	if (!array || size <= 0)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			left = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
