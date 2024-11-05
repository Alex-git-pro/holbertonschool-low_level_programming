#include <stdio.h>
#include "main.h"

/**
 * *_strstr - function that locates a substring.
 * @haystack: parameters string
 * @needle: parameters
 * Return: return 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

		for (i = 0; haystack[i] != '\0'; i++)
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		return ('\0');
}
