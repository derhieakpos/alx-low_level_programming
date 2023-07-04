#include "lists.h"

/**
 * list_len - returns the number of elements.
 * @h: pointer.
 *
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
	unsigned int c;

	c = 0;

	while (h != 0)
	{
		h = h->next;
		c++;
	}
	return (c);

}
