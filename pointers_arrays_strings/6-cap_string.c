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
	int capitalize_first = 1;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (capitalize_first && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] -= 32;
			}
			capitalize_first = 0;
		}
		i++;
	}
	return (s);

}
