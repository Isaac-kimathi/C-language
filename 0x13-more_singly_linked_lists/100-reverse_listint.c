#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: pointer to the address of the head of the linked list.
 *
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *copy;

	if (!head || *head == 0)
		return (0);
	copy = NULL;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		(*head)->next = copy;
		copy = *head;
		*head = temp;
	}
	(*head)->next = copy;
	return (*head);
}
