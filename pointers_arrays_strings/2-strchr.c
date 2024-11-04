#include <stdio.h>
#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: parameters string
 * @c: parameters
 * Return: return 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		s++;

		return (s);
	}

	if (c == '\0')

		return (s);

	return (NULL);
}