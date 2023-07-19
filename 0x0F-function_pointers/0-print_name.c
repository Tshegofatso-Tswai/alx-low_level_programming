#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer.
 * @name: A pointer to the name to be printed.
 * @f: A function pointer to customize the printing format.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

