#include "main.h"

/**
 * more_numbers - printing 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 */
void more_numbers(void)
{
	int a = 0, b;

	while (a++ <= 10)
	{
		_putchar(a);

		for (b = 0; b <= 14; b++)
			_putchar(b + '0');
	}
	_putchar('\n');
}

