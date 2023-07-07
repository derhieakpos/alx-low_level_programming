#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - print listint_t list.
 * @head: pointer the head node
 *
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		node_count++;

		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;

		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (node_count);
}
