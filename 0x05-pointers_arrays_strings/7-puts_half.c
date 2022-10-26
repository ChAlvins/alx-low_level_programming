#include "main.h"

/**
 * puts_half - printing second half of a string,
 * followed by a new line
 * @str: string
 *
 *
 */

void puts_half(char *str)
{
	int a = 0, b, n;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 0)
	{
		n = a / 2;
	}
	else
	{
		n = (a + 1) / 2;
	}
	for (b = n; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
