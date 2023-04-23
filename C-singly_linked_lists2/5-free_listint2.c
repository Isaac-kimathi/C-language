#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *v;

	if (head == NULL)
		return;
	while (*head)
	{
		v = (*head)->next;
		free(*head);
		*head = v;
	}
	head = NULL;
}
