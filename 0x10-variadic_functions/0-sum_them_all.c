#include <stdarg.h>

/**
 * sum_them_all - a funciton that prints the sum of variable number of numbers
 * @n: the count of the variable arguments
 * Return: the sum of all the passed arguments
 */
int sum_them_all(const unsigned int n, ...)
{
va_list argument_pointer;
int sum = 0;
unsigned int counter = 0;
if (n == 0)
return (0);

va_start(argument_pointer, n);

while (counter < n)
{
sum += va_arg(argument_pointer, int);
counter++;
}
return (sum);
}
