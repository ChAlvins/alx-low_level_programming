#include "main.h"

/**
 * print_line - drawing a straight line in the terminal
 * @n: number of times the character _ is printed
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
