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
	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
				accept++;
			}
		}
		s++;
	}
	return (NULL);
}
