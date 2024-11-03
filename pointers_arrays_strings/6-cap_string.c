#include "main.h"
#include <stdio.h>

/**
 * *cap_string - function that capitalizes all words of a string.e
 * @s: parameters pointer
 * Return: return 0
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);

}
