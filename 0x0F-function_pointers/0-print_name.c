#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: a string to be display
 * @f: A pointer function
 *
 * Return: NULL if empty
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
