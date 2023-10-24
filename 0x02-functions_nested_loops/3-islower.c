#include "main.h"
/**
 * _islower - probes a given character to decide whether
 * it corresponds to a lowercase ascii character or not
 *
 * @c: the numerical value to be tested against
 * ASCII lowercase characters codes
 *
 * Return: 1 if c is a lowercase character; 0 otherwise
 */
int _islower(int c)
{
if ((c >= 0x61) && (c <= 0x7A))
return (1);
else
return (0);
}
