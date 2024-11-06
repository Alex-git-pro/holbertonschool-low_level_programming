#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string..
 * @s: Pointer to the string to be printed
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
/*
 * Recursive case: add 1 for this character and
 * recursively call for the rest of the string
 */
	return (1 + _strlen_recursion(s + 1));
}
