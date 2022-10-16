#include <stdio.h>

/**
 * main - Entry point
 * Print single digit numbers of base 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
		printf("%d", x);

	printf("\n");
	return (0);
}
