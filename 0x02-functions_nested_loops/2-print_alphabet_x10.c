#include "main.h"

/**
 * print_alphabet_x10 - prints the English language alphabets 10 times
 * Return: n/a
 */
void print_alphabet_x10(void)
{
char character = 'a';
char iterator = 0;

while (iterator <= 10)
{
while (character <= 'z')
{
_putchar(character);
character++;
}
iterator++;
}
return;
}
