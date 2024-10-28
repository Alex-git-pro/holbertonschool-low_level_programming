#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 *Return: is success
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

	_putchar('\\');

	_putchar('\n');
}
	if (j < 1)
	_putchar('\n');
}


