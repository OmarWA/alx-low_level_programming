#include "main.h"

/**
 * print_alphabet_x10 - prints the English language alphabets 10 times
 * Return: n/a
 */
void print_alphabet_x10(void)
{
char character = 'a';
char iterator = 1;

while (iterator <= 10)
{
character = 'a';
while (character <= 'z')
{
_putchar(character);
character++;
}
_putchar('\n');
iterator++;
}
return;
}
