#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: pointer to the function used to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	/* Vérifie si le nom est NULL */
	if (name == NULL)
	{
		/* Si le nom est NULL, on ne fait rien et on quitte la fonction */
		return;
	}
	/* Vérifie si le pointeur de fonction est NULL */
	if (f == NULL)
	{
		/**
		 *  Si le pointeur de fonction est NULL,
		 * on fait rien et on quitte la fonction
		 */
		return;
	}
/* Appel la fonction passée en paramètre avec le nom */
	f(name);
}
