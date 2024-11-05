#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s: parameters string
 * @accept: parameters
 * Return: return 0
 */

char *_strpbrk(char *s, char *accept)
{
		int i;/* Déclaration des variables de boucle */
		int j;/* Déclaration des variables de boucle */

/* Déclaration des variables de boucle */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Boucle interne : parcourt chaque caractère de la chaîne accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/*Vérifie si le caractère actuel de s correspond àuncaractèrede accept*/
			if (s[i] == accept[j])
			{
				/* Si une correspondance est trouvée,retourne vers ce caractère dans s */
				return (s + i);
			}
		}
	}
/* Retourne NULL si c n'est pas trouvé */
	return ('\0');
}
