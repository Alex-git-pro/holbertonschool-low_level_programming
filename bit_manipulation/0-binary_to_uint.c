#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that converts binary number to an uint
 * @b: Pointer to a string of 0 ans 1 chars
 *
 * Return: the converted number, or 0 if there is more
 * chars in the string b that is not 0 or 1 or
 * if b is null
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result <<= 1;

		if (b[i] == '1')
			result += 1;

		i++;
	}
	return (result);
}
