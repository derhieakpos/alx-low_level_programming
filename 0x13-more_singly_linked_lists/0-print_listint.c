#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints all the elements of listint_t list.
  * @h: pointer to the struct type.
  *
  * Return: number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
