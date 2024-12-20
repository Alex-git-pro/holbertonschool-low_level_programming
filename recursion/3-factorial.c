#include "main.h"

/**
 * factorial - function that Calculates the factorial of a number
 * @n: The number to calculate the factorial of *
 *
 * Return: The factorial n, or -1
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0 || n == 1)
	return (1);

	return (n * factorial(n - 1));
}
