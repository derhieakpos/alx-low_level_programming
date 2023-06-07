#include "main.h"
/**
 *  _print_rev_recursion - prints a sring in reverse
 *  @s: the string going in reverse
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
