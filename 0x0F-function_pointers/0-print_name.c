#include "function_pointers.h"

/**
 * print_name - calls internal functions to print @name.
 * @name: the name that should be printed
 * @f: a function pointer that shall calls a given function
 * Return: N/A
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
return;
}
