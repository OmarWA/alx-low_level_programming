#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14 using _putchar three times only
 * Return: N/A
*/
void more_numbers(void)
{
int iterator = 1;
int counter = 0x30;
int keepLooping = 1;
int tenFlag = 0;
while (iterator <= 10)
{
counter = 0x30;
keepLooping = 1;
tenFlag = 0;
while (keepLooping)
{
if (counter == 0x3A)
{
counter = 0x30;
tenFlag = 1;
}
if (tenFlag)
_putchar('1');
_putchar(counter);
if (tenFlag && (counter == 0x34))
keepLooping = 0;
counter++;
}
_putchar('\n');
iterator++;
}
}
