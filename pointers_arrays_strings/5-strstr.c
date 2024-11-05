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

/* Si needle est vide, retourne haystack */
	if (needle[0] == '\0')
	{
		return (haystack);
	}

/* Parcourt chaque caractère de haystack */
		for (i = 0; haystack[i] != '\0'; i++)
		{
			/* Vérifie si needle apparaît à partir de cette position dans haystack */
			for (j = 0; needle[j] != '\0'; j++)
			{
				/* Si les caractères ne correspondent pas, quitte la boucle */
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			/* Si nous avons parcouru tout needle, une correspondance est trouvée */
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		return ('\0');
}
