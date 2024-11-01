#include "main.h"

/**
 * puts_half - function that prints prints half of a string
 * @str: parameters string
 * Return: return 0
 */

void puts_half(char *str)
{
	int len = 0;
	int starto;
	int n = len;


	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		starto = len / 2;
	}
	else
	{
		starto = (len / 2) + 1;
	}


	for (n = starto; n < len; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
