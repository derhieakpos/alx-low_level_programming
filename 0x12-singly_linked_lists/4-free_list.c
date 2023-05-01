#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list_t list.
 * @head: the pointer to list_t.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_list(head->next);
		}
		free(head->str);
		free(head);
	}
}
