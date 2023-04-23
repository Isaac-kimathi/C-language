#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of the list
 * @h: pointer to the head of the list
 *
 * Return: nos of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
