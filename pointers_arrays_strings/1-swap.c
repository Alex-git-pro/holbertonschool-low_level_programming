#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: Parameters
 * @b: Parameters
 * Return: return 0
 */


void swap_int(int *a, int *b)
{
	int tem = *a;

	*a = *b;

	*b = tem;
}
