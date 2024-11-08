#include "main.h"
#include <stdio.h>

/**
 * main - print nummber of arguments.
 * @argc: number of arguments.
 * @argv: array.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
