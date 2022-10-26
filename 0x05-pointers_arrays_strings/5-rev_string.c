#include "main.h"

/**
 * rev_string - reversing a string
 * @s: string
 *
 */

void rev_string(char *s)
{
	int a, b, c;
	char d;

	for (a = 0; s[a] != '\0'; a++)
	{
		b = a - 1;
	}
	for (c = 0; b >= 0 && c < b; b--, c++)
	{
		d = s[c];
		s[c] = s[b];
		s[b] = d;
	}
}
