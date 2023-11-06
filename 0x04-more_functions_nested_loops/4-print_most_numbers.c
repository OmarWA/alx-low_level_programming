#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9, except for 2 and 4
 * Return: N/A
*/
void print_most_numbers(void)
{
char counter = '0';
while (counter <= '9')
{
if (counter == '2' || counter == '4')
{
counter++;
continue;
}
_putchar(counter);
counter++;
}
_putchar('\n');
return;
}
