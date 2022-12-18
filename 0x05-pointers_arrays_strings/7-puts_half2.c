#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * function should print the second half of the string
 * If the number of characters is odd, the function should print the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2
 * Return: half of the string
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
