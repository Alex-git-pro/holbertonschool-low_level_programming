#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at index
 * @n: Pointer of the number
 * @index: start from 0 of the you want to set
 * Return: the value of the bit at index or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int mask;

	if (index >= sizeof(n) * 8)
	return (-1);

	mask = 1UL << index;

	*n &= ~mask;

	return (1);
}
