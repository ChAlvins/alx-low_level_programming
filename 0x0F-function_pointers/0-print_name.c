#include "function_pointers.h"

/**
 * print_name - unction that prints a name
 * @name: char string
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
