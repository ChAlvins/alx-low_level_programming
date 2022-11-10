#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: size of array to create
 * Return: NULL if str = Null,a pointer
 * if _strdup returns pointer or NULL if it fails
 */

char *_strdup(char *str)
{
	int i, j;
	char *copy;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	copy = (char *)malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
		return (NULL);

	while ((copy[j] = str[j]) != '\0')
	{
		j++;
	}
	return (copy);
}
