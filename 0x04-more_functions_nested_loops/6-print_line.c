#include "main.h"

/**
 *print_line - Prints @n number of '_' to draw a straight line
 * @n: the length of the straight line
 * Return: N/A
 */
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
