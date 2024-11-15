#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - function that returns the length of the strings
 * @s: parameters
 * Return: return 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - function that copies a string.
 * @dest: parameters pointer
 * @src: parameter
 *
 * Return: return 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	char *Return = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest[i] = '\0';
	return (Return);
}

/**
 * new_dog - function that creates a new dog.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *leiko;
	int len_name = 0;
	int len_owner = 0;

	if (name == NULL)
		return (NULL);

	if (name == NULL || owner == NULL)
	return (NULL);

	if (name != NULL && owner != NULL)
	{
		len_name = _strlen(name) + 1;
		len_owner = _strlen(owner) + 1;
		leiko = malloc(sizeof(dog_t));
		if (leiko == NULL)
		return (NULL);
	}

	leiko->name = malloc(sizeof(char) * len_name);
		if (leiko->name == NULL)
		{
			free(leiko);
			return (NULL);
		}

		leiko->owner = malloc(sizeof(char) * len_owner);
		if (leiko->owner == NULL)
		{
			free(leiko->name);
			free(leiko);
			return (NULL);
		}
		leiko->age = age;
		leiko->name = _strcpy(leiko->name, name);
		leiko->owner = _strcpy(leiko->owner, owner);

		return (leiko);

}
