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
	int i;

	/* Parcourt la chaîne jusqu'au caractère nul */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Compare le caractère courant avec c */
		if (s[i] == c)
		/* Retourne un pointeur vers le caractère trouvé */
			return (s + i);
	}
	/**
	 * Si c est le caractère nul,
	*retourne un pointeur vers la fin de la chaîne
	*/
	if (c == '\0')
	/* Retourne l'adresse du caractère nul de fin de chaîne */
	return (s + i);
/* Retourne NULL si c n'est pas trouvé */
	return (NULL);
}
