#include "main.h"

/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 * @n: number of bytes to be be copiesd
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
