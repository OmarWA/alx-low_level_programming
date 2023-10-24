#include <stdio.h>

/**
 * main - df
 * Return: 0
 */
int main(void)
{
int a = 1, b = 2, count = 2;
printf("%d, %d, ", a, b);
while (count < 98)
{
int next = a + b;
if (count < 97)
{
printf("%d, ", next);
}
else
{
printf("%d\n", next);
}
a = b;
b = next;
count++;
}
return (0);
}
