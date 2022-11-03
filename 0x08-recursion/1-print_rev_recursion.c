#include "main.h"

/**
 * _print_rev_recursion - printing a string in reverse
 * @s: pointer to a string
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(1 + s);
		_putchar(*s);
	}
}
