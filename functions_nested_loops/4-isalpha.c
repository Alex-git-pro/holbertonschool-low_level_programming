#include "main.h"
/**
 * _isalpha - checks for alphabetic character _isalpha
 * Return: Always 0
 * @c: Character
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);

}
