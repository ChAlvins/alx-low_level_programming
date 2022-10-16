#include <stdio.h>

/**
 * main - Entry point
 * prints the lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);

	putchar('\n');
	return (0);
}
