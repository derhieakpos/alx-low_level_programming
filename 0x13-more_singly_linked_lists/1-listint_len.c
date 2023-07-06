#include "lists.h"
#include <stdio.h>

/**
  * listint_len - computes the number of nodes in the listint_t list.
  * @h: pointer to the struct.
  *
  * Return: the number of elements.
  */
size_t listint_len(const listint_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
