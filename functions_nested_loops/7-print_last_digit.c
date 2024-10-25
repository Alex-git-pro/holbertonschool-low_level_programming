#include "main.h"
/**
*print_last_digit - prints the last digit of a number
* @r: The integer to be computed.
* Return: The absolute value of the integer.
*/

int print_last_digit(int r)
{
	int last_digit;

	last_digit = r % 10;
	if (last_digit < 0)
	last_digit = -last_digit;

	_putchar('0' + last_digit);

return (last_digit);
}
