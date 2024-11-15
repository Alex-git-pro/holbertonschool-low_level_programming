#include "dog.h"
#include <stdio.h>

/**
 * free_dog - function that frees dogs.
 * @d: dog freedom
 * Return: return 0
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		(d->name)
		free(d->name);
		(d->owner)
		free(d->owner);
		free(d);
	}
}
