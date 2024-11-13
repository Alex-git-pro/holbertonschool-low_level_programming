#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value (included)
 * @max: The maximum value (included)
 *
 * Return: Pointer to the newly created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;
	int current;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	current = min;
	for (i = 0; i < size; i++)
	{
		arr[i] = current;
		current++;
	}

	return (arr);
}
