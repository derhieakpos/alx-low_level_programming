#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees listint_t list
 * @h: the pointer of the struct
 *
 * Return: size of the freed list, sets the head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	int d;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			c++;
		}
		else
		{
			free(*h);
			*h = NULL;
			c++;
			break;
		}
	}

	*h = NULL;
	return (c);
}
