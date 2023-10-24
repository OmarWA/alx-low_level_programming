#include "main.h"

/**
 * print_times_table - prints the times table of @n
 * @n: the number we wish to print its times table
 * Return: n/a
 */
void print_times_table(int n)
{
int number = 0, iterator = 0;
int product = 0, product_tens = 0, product_units = 0;
if (!((n > 15) || (n < 0)))
{
while (number <= n)
{
iterator = 0;
while (iterator <= n)
{
product = number * iterator;
product_units = product % 10;
product_tens = ((product - product_units) / 10);
if (iterator == 0)
goto SKIP;
if (product_tens == 0)
_putchar(' ');
else
_putchar('0' + product_tens);
SKIP:
_putchar('0' + product_units);
if (iterator == n)
{
iterator++;
continue;
}
_putchar(',');
_putchar(' ');
iterator++;
}
_putchar('\n');
number++;
}
}
return;
}
