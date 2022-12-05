#include "main.h"

/**
 * set_bit - Get the bit of a given index
 * @n: number to modify bit
 * @index: the position of the bit
 * Return: the value of a given index or -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;
	return (1);
}
