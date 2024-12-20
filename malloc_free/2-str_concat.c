#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to newly allocated space with concatenated strings,
 *         or NULL if allocation fails
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *ptr;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[i] != '\0')
	i++;

	while (s2[j] != '\0')
	j++;

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	return (NULL);

	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}

	for (k = 0; k < j; k++)
	{
		ptr[i + k] = s2[k];
	}

	ptr[i + j] = '\0';
	return (ptr);
}
