#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * multiples of three print Fizz
 * multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 * Return: 0 (success)
 */
int main(void);
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");
	return (0);
}
