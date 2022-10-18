#include "main.h"

/**
 * _isalpha - printint lower or uppercase
 * @c: input character
 * Return: 1 if char is either upper or lowercase otherwise 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
