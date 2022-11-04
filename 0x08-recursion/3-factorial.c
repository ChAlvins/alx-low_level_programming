#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer to determine its factorial
 * Return: 0 ,-1 or factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}
