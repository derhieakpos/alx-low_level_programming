#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of listint_t list.
 * @head: head node.
 * @index: position of the node.
 *
 * Return: head node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (c != index)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
		c++;
	}

	return (head);
}
