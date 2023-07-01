#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _calloc - allocates memory to array nmemb.
  * @nmemb: array elements.
  * @size: size of each element.
  *
  * Return: Pointer to the memory address.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i, mem;

	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = nmemb * size;

	ptr = malloc(mem);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < mem; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
