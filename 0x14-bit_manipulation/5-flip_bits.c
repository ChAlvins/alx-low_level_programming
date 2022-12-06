#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	int counter;

	difference = n ^ m;
	counter = 0;

	while (difference)
	{
		counter++;
		difference &= (difference - 1);
	}
	return (counter);
}
