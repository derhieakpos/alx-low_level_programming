#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates the memory
 * @b: the size of the memory to be allocated.
 * Return: the pointer to be allocated memory on success or 98 if insufficient
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
