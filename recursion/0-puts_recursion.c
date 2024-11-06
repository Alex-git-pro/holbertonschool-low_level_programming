#include "main.h"

/**
 * _puts_recursion - Prints a string recursively, followed by a new line
 * @s: Pointer to the string to be printed
 *
 * Description: This function prints each character of the string
 * recursively and adds a new line at the end.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
