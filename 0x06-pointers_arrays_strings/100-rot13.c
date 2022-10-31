#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: string
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefgehijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
