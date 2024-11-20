#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments to be summed
 *
 * Return: sum of all parameters, or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list varlist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(varlist, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(varlist, int);
	}
	va_end(varlist);
	return (sum);

}
