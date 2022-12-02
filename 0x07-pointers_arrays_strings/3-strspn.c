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
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					k++;
			}
		}
		else
			return (k);
	}
	return (k);
}
