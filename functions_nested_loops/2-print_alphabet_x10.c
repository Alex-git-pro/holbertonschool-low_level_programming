#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet ,in lowercase
 *
 */
void print_alphabet_x10(void)
{
int n;
char a;

for (n = 0; n <= 9; n++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
