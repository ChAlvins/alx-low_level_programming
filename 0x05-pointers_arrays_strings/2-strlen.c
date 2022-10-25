#include "main.h"

/**
 * _strlen - returning the length of a string
 * @s: character
 * Return: 0 (success)
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
