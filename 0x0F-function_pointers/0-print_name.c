#include "function_pointers.h"

/**
 * print_name - Print a name from a function pointer
 * @name: char string
 * @f: function pointer that takes an argument as a string
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
