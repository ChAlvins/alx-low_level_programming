#include "main.h"

/**
 * print_binary -  prints the binary representation of a number without % or /
 * @n: decimal number to print as binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char binary;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	binary = (n & 1) ? '1' : '0';
	_putchar(binary);
}
