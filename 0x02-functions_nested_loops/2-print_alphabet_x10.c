#include "main.h"

/**
 * print_alphabet_x10 - in lowercase x10
 *
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char b;

	while (a++ < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
	}
}
