#include "main.h"

/**
 * print_triangle - followed by a new line.
 * @size: size of the triangle
 * Use the character # to print the triangle
 * If size is 0 or less, the function should print only a new line
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar("\n");
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= (size - a))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
