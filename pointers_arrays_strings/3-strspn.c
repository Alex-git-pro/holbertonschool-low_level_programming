#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: parameters pointer
 * @accept: parameter
 * Return: return 0
 */

unsigned int _strspn(char *s, char *accept)
{
		unsigned int count = 0; /* Compteur pour les caractères correspondants */
		int found;/* Drapeau indiquant si une correspondance est trouvée */
		int i;/* Compteurs de boucle */
		int j;/* Compteurs de boucle */

/* Parcourir chaque caractère de s */
	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;/* Réinitialiser le drapeau pour chaque caractère de s */

/* Vérifier si le caractère actuel de s correspond à un de accept */
		for (j = 0; accept[j] != '\0'; j++)
		{

			if (s[i] == accept[j])
			{
				found = 1;/* Correspondance trouvée */
				count++;
				break;
			}
		}
		/* Si aucune correspondance n'est trouvée,fin de la sous-chaîne préfixe */
		if (found == 0)
		{
			break;
		}
	}
	return (count);
}
