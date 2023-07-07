#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node.
 * @head: pointer to the head node pointer.
 * @index: the position of the nth node.
 *
 * Return: 1 if success -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *tmp;
	listint_t *temp;

	if (head == NULL)
		return (-1);

	tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (c != index)
	{
		temp = tmp;
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		c++;
	}

	temp->next = tmp->next;
	free(tmp);
	return (1);
}
