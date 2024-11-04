#include <stdio.h>
#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: parameters string
 * @b: parameters
 * @n: parameters
 * Return: return 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
