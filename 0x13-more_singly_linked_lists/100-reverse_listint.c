#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t list.
 * @head: pointer to head pointer.
 *
 * Return: first node address.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *temp;

	tmp = *head;
	if (tmp == NULL)
		return (NULL);

	temp = tmp->next;
	tmp->next = NULL;

	while (temp != NULL)
	{
		tmp = temp;
		temp = temp->next;
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
