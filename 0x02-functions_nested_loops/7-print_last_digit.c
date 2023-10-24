#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @number: a signed integer whose last digit is of interest
 * Return: the last digit of @number
 */
int print_last_digit(int number)
{
_putchar(0x30 + (number % 10));
return (number % 10);
}
