#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list varlist;
	unsigned int i;
	char *s;

	va_start(varlist, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(varlist, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != 0 && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(varlist);
}
