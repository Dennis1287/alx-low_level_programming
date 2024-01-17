#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 *
 * @name: a pointer to a character array that represents the name to be printed
 * @f: a function pointer that takes a char * as an argument and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
