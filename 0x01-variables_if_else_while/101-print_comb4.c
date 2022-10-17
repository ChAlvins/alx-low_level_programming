#include <stdio.h>

/**
 * main - Entry point
 * random combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48 ; a <= 57 ; a++)
	{
		for (b = 49 ; b <= 57 ; b++)
		{
			for (c = 50 ; c <= 57 ; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
