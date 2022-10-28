#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: string
 * Return: string
 */

char *leet(char *a)
{
	int i;
	int j;
	char b[] = "aAeEoOtTlL";
	char c[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[i] == b[j])

				a[i] = c[j];
		}
	}
	return (a);
}
