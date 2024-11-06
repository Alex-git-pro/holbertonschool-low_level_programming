#include "main.h"

/**
 * _print_rev_recursion - Prints a string recursively in reverse
 * @s: Pointer to the string to be printed
 *
 * Description: This function prints each character of the string
 * recursively and adds a new line at the end.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
