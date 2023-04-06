#include "main.h"
/*
 * _puts - the functions prints an output
 * @s: the value to be output
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
