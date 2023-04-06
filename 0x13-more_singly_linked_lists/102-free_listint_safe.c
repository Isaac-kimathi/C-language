#include "lists.h"
#include <stdlib.h>
size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * free_listint_safe - Frees a listint_t list safe
 * @h: A pointer to the address of the head of the listint_t list
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *m;
	size_t nds, idx;

	nds = looped_listint_count(*h);
	if (nds == 0)
	{
	for (; h != NULL && *h != NULL; nds++)
	{
		m = (*h)->next;
		free(*h);
		*h = m;
	}
	}
	else
	{
	for (idx = 0; idx < nds; idx++)
	{
		m = (*h)->next;
		free(*h);
		*h = m;
	}
	*h = NULL;
	}
	h = NULL;
	return (nds);
}
/**
 * looped_listint_count - Counts the number of unique nodes
 * @head: pointer to the head of the listint_t to check.
 *
 * Return: no of unique nodes in the list or 0
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *axe, *key;
	size_t nodes = 1;

	if (!head || !head->next)
		return (0);
	axe = head->next;
	key = (head->next)->next;
	while (key)
	{
		if (axe == key)
		{
			axe = head;
			while (axe != key)
			{
				nodes++;
				axe = axe->next;
				key = key->next;
			}
			axe = axe->next;
			while (axe != key)
			{
				nodes++;
				axe = axe->next;
			}
			return (nodes);
		}
		axe = axe->next;
		key = (axe->next)->next;
	}
	return (0);
}
