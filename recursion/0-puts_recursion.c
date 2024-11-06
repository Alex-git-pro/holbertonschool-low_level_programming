#include "main.h"

/**
 * _puts_recursion - Prints a string recursively, followed by a new line
 * @s: Pointer to the string to be printed
 *
 * Description: This function prints each character of the string
 * recursively and adds a new line at the end.
 */

void _puts_recursion(char *s)
{
	/* Cas de base : si nous sommes à la fin de la chaîne */
	if (*s == '\0')
	{
		_putchar('\n');/* Imprime une nouvelle ligne à la fin */
		return;
	}
	/* Cas récursif */
	_putchar(*s);/* Imprime le caractère actuel */
	_puts_recursion(s + 1);/* Appel récursif pour le reste de la chaîne */
}							/*s + 1 fait avancer le pointeur au caractère suivant de la chaîne.*/
