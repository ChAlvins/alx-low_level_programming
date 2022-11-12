#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: unsigned integer
 * Return: pointer to s1 followed by the first n bytes of s2,
 * and null terminated
 * if n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *new_str;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		n = j;

	new_str = malloc(sizeof(char) * (n + i + 1));
	if (new_str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		new_str[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		new_str[i + k] = s2[k];
	}
	new_str[i + j] = ('\0');
	return (new_str);
}
