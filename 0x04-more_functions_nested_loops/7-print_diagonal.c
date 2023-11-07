#include "main.h"

/**
 * print_diagonal - prints a diagonal line of length @n
 * @n: the length of the diagonal line
 * Return: N/A
 */
void print_diagonal(int n)
{
int iterator = 0;
int whiteSpaceCounter = 0;
while ((iterator < n) && (n > 0))
{
whiteSpaceCounter = 0;
while (whiteSpaceCounter < iterator)
{
_putchar(' ');
whiteSpaceCounter++;
}
_putchar('\\');
_putchar('\n');
iterator++;
}
if (n <= 0)
_putchar('\n');

return;
}
