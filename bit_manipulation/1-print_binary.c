#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: Pointer of the number
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)

{
	int i = 0;
	int printed = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}

	}

}
