#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * cents is the amount of cents you need to give back
 * @argc: argument count
 * @argv: arguments
 * Return: 0 else 1 if error
 */

int main(int argc, char *argv[])
{
	int result, i;
	int coins[] = {25, 10, 5, 2, 1};
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;

	if (num < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			result++;
			num -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
