#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array of integers
 * @size: The size of the array
 * @action: A pointer to the function to execute
 *
 * Description: This function applies the 'action' function to each
 * element of the 'array'.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
/* On vérifie si les paramètres sont valides */
	if (array == NULL || size <= 0 || action == NULL)
	{
		/* Si un paramètre n'est pas valide, on arrête la fonction */
		return;
	}
	/* On parcourt chaque élément du tableau */
	for (i = 0; i < size; i++)
	{
		/* On applique la fonction 'action' à l'élément actuel du tableau */
		(*action)(array[i]);
	}
}

