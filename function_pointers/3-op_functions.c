#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (num1 + num2);

}

/**
 * op_sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (num1 - num2);
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
	return (num1 * num2);
}

/**
 * op_div - Divides two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the division of a by b
 */

int op_div(int a, int b)
{
	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (num1 / num2);
}

/**
 * op_mod - Computes the modulo of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (num1 % num2);
}

