#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - function that sets the value of a bit to 0 at index
 * @n: The number
 * @m: The number flipped
 * Return: the value of the bit at index or -1 if error
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int flipped = n ^ m;
	unsigned int count = 0;

	while (flipped > 0)
	{
		count += (flipped & 1);
		flipped >>= 1;
	}
	return (count);
}
