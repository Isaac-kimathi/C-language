#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Locates a specific node of a linked list.
 * @head: pointer to the head of the linked list.
 * @index: index of the node to locate starting at 0.
 * Return: NULL or the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int d = 0;

	while (d < index)
	{
		if (head->next == NULL)
			return (NULL);
		d++;
		head = head->next;
	}
	return (head);
}
