#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node to a linked list at a
 *                    given point
 * @head: pointer to the address of the head of the linked list.
 * @idx: index of the linked list where the new node is to be added.
 * @n: integer for the new node to contain.
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == 0)
		return (0);
	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (current == 0 || current->next == 0)
			return (0);
				current = current->next;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
