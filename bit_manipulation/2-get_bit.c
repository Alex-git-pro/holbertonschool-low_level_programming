#include "main.h"
#include <stdlib.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: Pointer of the number
 * @index: start from 0 of the you want to get
 * Return: the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)

{
	unsigned long int mask;

	if (index >= sizeof(n) * 8)
	return (-1);

	mask = 1UL << index;

	if (n & mask)
	return (1);
	else
	return (0);
}
