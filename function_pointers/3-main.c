#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 98 for wrong number of arguments,
 *         99 for invalid operator, or result of operation
 */


int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*opera)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	opera = get_op_func(argv[2]);

	if (opera == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = opera(num1, num2);
	printf("%d\n", result);
	return (0);
}
