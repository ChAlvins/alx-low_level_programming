#include "main.h"

/**
 * print_diagonal - diagonal line on the terminal
 * @n: is the number of times character \ be printed
 *
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= n; a++)
	{
		for (b = 0; b < a; b++)
		{
			if (b == a)
			{
				_putchar('\\');
			}
			else if (b < a)
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
