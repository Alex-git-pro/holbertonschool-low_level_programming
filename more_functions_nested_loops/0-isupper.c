#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * Returns1 if c is uppercase
 * Returns 0 otherwise
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}