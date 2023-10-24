#include "main.h"

/**
 * print_sign - prints the algebraic sign of a given number
 * @n: a signed integer to be evaluated
 * Return: 1 if @n is +ve, -1 if @n is -ve, and 0 if @n is zero
 */
int print_sign(int n)
{
int ret = 0;
char sym = 0;
ret = (n >= 0) ? 1 : -1;
ret = (n == 0) ? 0 : ret;

sym = (ret >= 0) ? '+' : '-';
sym = (ret == 0) ? '0' : sym;

_putchar(sym);
return (ret);
}
