#include "main.h"
/**
 * _memcpy - copies the memory of a location
 * @dest: the destination of the copy
 * @src: the source of the copy
 * @n: the unsigned int
 *
 * Return: the pointer of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
