#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string.
 * @dest: parameters pointer
 * @src: parameter
 * @n:parameter
 * Return: return 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
/* Copie jusqu'à n octets de src vers dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
/**
 *Si moins de n octets ont été copiés
 *,remplit le reste avec des octets nuls
 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
