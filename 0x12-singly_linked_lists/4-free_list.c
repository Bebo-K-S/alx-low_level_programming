#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 *
 * @head: The list to free.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head)
	{
		temp = head->next;
		free(head);
		free_list(temp);
	}
}
