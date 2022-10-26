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
	int a, n;

	for (a = 0; str[a] != '\0'; a++)
	{

	if ((a + 1 % 2) != 0)
	{
		n = (a - 1) / 2;
	}
	else
	{
		n = a / 2;
	}
	for (a = n; str[a] != 0; a++)
	{
		_putchar(str[a]);
	}
	}
	_putchar('\n');
}
