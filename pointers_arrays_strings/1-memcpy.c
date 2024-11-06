#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: parameters string
 * @src: parameters
 * @n: parameters
 * Return: return 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

/* Boucle pour copier n octets de src vers dest */
		for (i = 0; i < n; i++)
	{
		/* Copie chaque octet de src vers dest */
			dest[i] = src[i];
	}
	/* Retourne le pointeur vers la zone mémoire de destination */
	return (dest);
}
