#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function printing strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator == NULL)
	{
		separator = ("");
	}
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
