#include "main.h"

/**
 * jack_bauer - prints every second of the day
 * Return: n/a
 */
void jack_bauer(void)
{
int hours_units = 0, hours_tens = 0, minutes_units = 0, minutes_tens = 0;
while (hours_tens < 2)
{
hours_units = 0;
while (hours_units < 10)
{
minutes_tens = 0;
while (minutes_tens < 6)
{
minutes_units = 0;
while (minutes_units < 10)
{
_putchar('0' + hours_tens);
_putchar('0' + hours_units);
_putchar(':');
_putchar('0' + minutes_tens);
_putchar('0' + minutes_units);
_putchar('\n');
minutes_units++;
}
minutes_tens++;

}
hours_units++;
}
hours_tens++;
}
return;
}
