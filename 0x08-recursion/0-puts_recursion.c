#include "main.h"
/**
 * _puts_recursion - The function that prints a string, followed a new line
 * @s: the value to be output
 *
 * Return: Always 0
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
