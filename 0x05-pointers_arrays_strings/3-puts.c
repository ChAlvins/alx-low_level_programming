#include "main.h"

/**
 * _puts - printing a string, followed by a new line
 * @str: string
 *
 */

void _puts(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
