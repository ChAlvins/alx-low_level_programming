#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: to be coipied to
 * @src: to be copied from
 * @n: upto nth string to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; n > i; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
