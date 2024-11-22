#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *k;
	va_list vali;
	i = 0;

	while (format != NULL)
	{
		va_start(vali, format);
		while (format[i] != 0)
		{
			j = 1;
			switch (format[i])
			{
				case 'c':
				printf("%c", va_arg(vali, int));
				break;
				case 'i':
				printf("%d", va_arg(vali, int));
				break;
				case 'f':
				printf("%f", va_arg(vali, double));
				break;
				case 's':
				k = va_arg(vali, char *);
				if (k == 0)
				k = "(nil)";
				printf("%s", k);
				break;
				default:
				j = 0;
				break;
			}
			if (format[i + 1] && j)
				printf(", ");
			i++;
		}
		va_end(vali);
		break;
	}
	printf("\n");
}
