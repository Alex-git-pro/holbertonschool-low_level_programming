#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: 2D array represneting the chessboard
 * @size: parameter
 */

void print_diagsums(int *a, int size)
{
	int i;/*Variable pour la boucle*/
	int sum_principal = 0;/*Somme de la diagonale principale*/
	int sum_secondary = 0;/* Somme de la diagonale secondaire*/

/*Boucle pour parcourir chaque ligne de la matrice*/
	for (i = 0; i < size; i++)
	{
		/*Ajouter l'élément de la diagonale principale*/
		sum_principal += a[i * size + i];/*Accès à la diagonale principale*/
		sum_secondary += a[i * size + (size - 1 - i)];/*l'élémentdiagonale second*/
	}

	printf("%d, ", sum_principal);
	printf("%d\n", sum_secondary);

}
