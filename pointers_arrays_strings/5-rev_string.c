#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string.
 * @s: parameters
 * Return: return 0
 */

void rev_string(char *s)
{
	int count = 0;
	int i;
	char j[450];

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		j[i] = s[count - 1 - i];
	}

	j[count] = '\0';

	for (i = 0; i <= count; i++)

	{
		s[i] = j[i];
	}


}
