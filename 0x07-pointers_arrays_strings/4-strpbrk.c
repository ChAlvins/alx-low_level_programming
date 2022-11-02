#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @accept: string
 * @s: string
 * Return: s if byte in s matches one of the bytes in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
