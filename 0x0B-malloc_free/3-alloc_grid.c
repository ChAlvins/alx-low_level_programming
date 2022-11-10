#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: first int array
 * @height: second int array
 * Return: NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
