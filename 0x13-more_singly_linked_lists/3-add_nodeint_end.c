#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of listint_t.
 * @head: pointer to the head node.
 * @n: integer value to assign.
 *
 * Return: pointer to the new node, NULL otherwise.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *temp;

	tmp = *head;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	while (tmp != NULL && tmp->next != NULL)
		tmp = tmp->next;

	if (tmp != NULL)
		tmp->next = temp;

	else
		*head = temp;

	return (temp);
}
