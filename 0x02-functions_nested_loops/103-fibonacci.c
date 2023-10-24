#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
int a = 1, b = 2, next, sum = 0;
while (b <= 4000000)
{
if (b % 2 == 0)
{
sum += b;
}
next = a + b;
a = b;
b = next;
}
printf("The sum of even-valued terms not exceeding 4,000,000 is: %d\n", sum);
return (0);
}
