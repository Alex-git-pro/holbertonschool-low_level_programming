#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that prints n elements of an array of integers
 * @dest: parameters pointer
 * @src: parameter
 * Return: return 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);

}
