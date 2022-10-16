#include <stdio.h>

/**
 * main - Entry point
 * Printing alpabets except q&e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char D;

	for (D = 'a'; D <= 'z'; D++)
	{
		if (D != 'e' && D != 'q')
			putchar(D);
	}
	putchar('\n');

	return (0);
}
