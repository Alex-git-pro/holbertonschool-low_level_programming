#include "main.h"
/**
* more_numbers - prints 10 times the numbers from 0 to 14.
* followed by new line.
* Return: 0
*/
void more_numbers(void)

{
int num1;
int num2;

for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 14; num2++)

{
if (num2 > 9)
{
_putchar((num2 / 10) + '0');
}
_putchar((num2 % 10) + '0');
}
_putchar(10);
}
}
