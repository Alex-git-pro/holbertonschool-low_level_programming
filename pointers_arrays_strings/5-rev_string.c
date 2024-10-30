#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string.
 * @s: parameters
 * Return: return 0
 */

void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j)
	{
		char c = s[i];

		s[i] = s[j];

		s[j] = c;

		i++;
		j--;
	}

}
