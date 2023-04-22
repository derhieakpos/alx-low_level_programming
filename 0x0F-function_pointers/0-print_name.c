#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name passed to it
 * @name: a string to be display
 * @f: A pointer function
 *
 * Return: NULL if empty
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
