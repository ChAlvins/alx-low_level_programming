#include "main.h"

/**
 * _atoi -  function that convert a string to an integer
 * @s: string to be converted
 * string can be preceded by an infinite number of characters
 * take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * not allowed to use long
 * not allowed to declare new variables of “type” array
 * not allowed to hard-code special values
 * -fsanitize=signed-integer-overflow gcc flag will be used in compilation
 * Return: 0 (success)
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			total = total * 10 + *s - '0';
		}
		else if (null_flag)
			break;
		s++;
	}
	if (sign < 0)
		total = (-total);
	return (total);
}
