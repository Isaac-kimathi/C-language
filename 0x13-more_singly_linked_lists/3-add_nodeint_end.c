#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add new nodes to the end of the linked list
 * @head: pointer of address of head
 * @n: int contagained in the new node
 * Return: address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (*head);
}
