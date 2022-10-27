#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
