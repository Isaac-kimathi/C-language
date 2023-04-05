#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns no of elements in a linked list
 * @h: pointer to head of the linked list
 * Return: no of elemets in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t k;

	for (k = 0; h; k++)
		h = h->next;
	return (k);
}
