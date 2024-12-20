#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings.
 * @s2: parameters pointer
 * @s1: parameter
 * Return: return 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
