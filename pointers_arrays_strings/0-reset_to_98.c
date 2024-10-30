#include "main.h"

/**
 * reset_to_98 - Function that takes a pointer to an int,
 * as parameter and updates the value it points to to 98
 * @n: Parameters
 * Return: return 0
 */

void reset_to_98(int *n)
{
	int *i = n;

	*i = 98;
}
