#include "main.h"

/**
 * _isdigit - checks for uppercase character.
 *@c: Check for character
 * Return: 1 if "c" is uppercase otherwise 0.
 *
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
