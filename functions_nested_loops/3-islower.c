#include "main.h"
/**
 * _islower - checks for lowercase character _islower
 * Return: Always 0
 * @c: Character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
