#include "main.h"
/**
 * _memset - fills the memory with constant byte
 * @s: the pointer to the memory
 * @b: the constant
 * @n: the memory size to fill
 *
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
