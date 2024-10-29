#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter
 * Return: return 0
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i < size; i++)

	{
		for (j = 1; j <= size; j++)
		{
			_putchar(' ');
		}

		for (k = 1; k <= size; k++)
		{
			_putchar('#')
		}

		_putchar('\n')
	}

}


#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: parameter
 * Return: return 0
 */

void print_triangle(int size)
{
	if (size < 0)
	{
		_putchar('\n');
	}

	for (i = 1; i < size; i++)

	{
		for (j = 1; j < size; j++)
		{
			_putchar(' ');
		}

		for (k = 1; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n')
	}
}





void print_triangle(int size)
{
	int i, j, k

	if (size < 0)
	{
		_putchar('\n')
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}

		for (k = 1; j <= size; k++)
		{
			_putchar('#');
		}
		_putchar('\n')
	}
}
