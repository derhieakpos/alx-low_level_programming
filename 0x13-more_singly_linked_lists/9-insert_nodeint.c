#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at the nth position.
 * @head: pointer to the head node pointer.
 * @index: position of the node.
 * @n: the position to be inserted.
 *
 * Return: address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int c = 0;
	listint_t *tmp;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	tmp = *head;

	if (tmp == NULL && index != 0)
		return (NULL);
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;

	if (index == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	while (c != index - 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			free(temp);
			return (NULL);
		}
		c++;
	}

	temp->next = tmp->next;
	tmp->next = temp;

	return (temp);
}
