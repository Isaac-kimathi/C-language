#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list.
 * @head: pointer to the head of the linked list to be freed.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
