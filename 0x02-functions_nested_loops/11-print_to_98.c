#include <stdio.h>

/**
 * print_to_98 - prints the natural numbers from @n all the way up to 98
 * @n: the starting point to print the natural numbers
 * Return: n/a
 */
void print_to_98(int n)
{
while (n <= 98)
{
printf("%d", n);
if (n == 98)
{
n++;
continue;
}
printf(", ");
n++;
}
printf("\n");
return;
}
