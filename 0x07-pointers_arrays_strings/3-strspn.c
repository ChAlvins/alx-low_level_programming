#include "main.h"

/**
 * _strspn - getting the length of a prefix substring
 * @s: initial segment where to search
 * @accept: bytes to be searched
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					k++;
			}
		}
		else
			return (k);
	}
	return (k);
}
