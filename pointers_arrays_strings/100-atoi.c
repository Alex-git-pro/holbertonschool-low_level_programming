#include "main.h"
#include <stdio.h>


/**
 * _atoi - function that convert a string to an integer
 * @s: parameter
 * Return: return 0
 */

int _atoi(char *s)
{
	char *ptr = s;
	int sign = 1;
	int result = 0;

	while (*ptr != '\0')
	{

		if (*ptr >= '0' && *ptr <= '9')
		{
			result = result * 10 + (*ptr - '0');
		}

		else if (*ptr == '-')
		{
			sign = sign * -1;
		}
		ptr++;
	}

	return (result);
}
