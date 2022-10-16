#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char D;

	for (D = 'a'; D <= 'z'; D++)
	{
		putchar(D);
	}
	putchar('\n');
	return (0);
}
