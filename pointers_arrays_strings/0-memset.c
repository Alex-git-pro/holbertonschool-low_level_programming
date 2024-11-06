#include <stdio.h>
#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: parameters string
 * @b: parameters
 * @n: parameters
 * Return: return 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

/* Boucle à travers n octets de mémoire */
	for (i = 0; i < n; i++)
	{
		/* Définit chaque octet à la valeur de b */
		s[i] = b;
	}
	/* Retourne le pointeur vers la zone mémoire remplie */
	return (s);
}
