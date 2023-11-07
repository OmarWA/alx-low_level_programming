#include "main.h"


/**
 * print_square - prints a square of side length = @size
 * @size: the side length of the square
 * Return: N/A
 */
void print_square(int size)
{
int squareSize = size, squareLength = size, squareWidth = size;
if (size <= 0)
{
_putchar('\n');
return;
}
while (squareLength > 0)
{
squareWidth = squareSize;
while (squareWidth > 0)
{
_putchar('#');
squareWidth--;
}
_putchar('\n');
squareLength--;
}
return;
}
