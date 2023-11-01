#include "main.h"

/**
 * largest_number - returns the largest of a given set of three numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: the largest number of @a, @b, and @c
 */
int largest_number(int a, int b, int c)
{
int largest_number = a;

largest_number = (b >= largest_number) ? b : largest_number;
largest_number = (c >= largest_number) ? c : largest_number;

return (largest_number);
}
