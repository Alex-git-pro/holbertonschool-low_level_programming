#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
int num;
char letter;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
