#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list.
 * @head: pointer to the head of the linked list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *v;

	while (head)
	{
		v = head->next;
		head = v;
		free(head);
	}
}
