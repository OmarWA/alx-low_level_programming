#include <stdio.h>
#include <string.h>

/**
 * main - the entry point of the program
 * Return: 0 upon successful completion of the program
 */
int main(void)
{
int iterator = 1;
while (iterator <= 100)
{
if (strcmp(((iterator % 15) == 0 ? "FizzBuzz" : (iterator % 5) == 0 ? "Buzz" :
(iterator % 3) == 0 ? "Fizz" : ""), "") == 0)
printf("%d ", iterator);
else
if (iterator == 100)
{
printf("%s", (iterator % 15) == 0 ? "FizzBuzz" :
(iterator % 5) == 0 ? "Buzz" : (iterator % 3) == 0 ? "Fizz" : "");
iterator++;
continue;
}
printf("%s ", (iterator % 15) == 0 ? "FizzBuzz" :
(iterator % 5) == 0 ? "Buzz" : (iterator % 3) == 0 ? "Fizz" : "");
iterator++;
}
printf("\n");
return (0);
}
