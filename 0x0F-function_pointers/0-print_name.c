#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: The function to call
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
