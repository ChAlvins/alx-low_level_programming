#include "main.h"

/**
 * print_diagonal - diagonal line on the terminal
 * @n: is the number of times character \ be printed
 *
 */
void print_diagonal(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('\');
	}
	_putchar('\n');
}
