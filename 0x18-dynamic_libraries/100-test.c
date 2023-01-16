#include "stdio.h"

/**
 * add - adding function
 * @a: int
 * @b: int
 * Return: 0 (success)
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracting function
 * @a: int
 * @b: int
 * Return: 0 (success)
 */

int sub(int a, int b)
{
	return (a - b);
}


/**
 * mul - mul function
 * @a: int
 * @b: int
 * Return: 0 (success)
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - division function
 * @a: int
 * @b: int
 * Return: 0 (success)
 */

int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

/**
 * mod - modulus function
 * @a: int
 * @b: int
 * Return: 0 (success)
 */

int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
