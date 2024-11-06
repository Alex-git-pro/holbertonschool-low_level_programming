#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: 2D array represneting the chessboard
 * @size: parameter
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_principal = 0;
	int sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		sum_principal += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
	}

	printf("%d, ", sum_principal);
	printf("%d\n", sum_secondary);

}
