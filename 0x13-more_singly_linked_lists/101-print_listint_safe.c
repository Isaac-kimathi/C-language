#include "lists.h"
#include <stdio.h>

size_t print_no_loop(const listint_t *h);
size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - print a list safely
 * @head: pointer to the header
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *t = head, *h = head;
	int b = 0, node = 0, node1;

	if (!head || !head->next)
		return (b);
	while (t != NULL && t->next != NULL)
	{
		h = h->next;
		t = t->next->next;
	if (h == t)
		break;
	}
	if (h != t)
	{
		h = head;
		return (print_no_loop(h));
	}
	h = head;
	while (h != t)
	{
		h = h->next;
		t = t->next;
	}
	node1 = h->n;
	h = head;
	node = 0;
	b = 0;
	while (h)
	{
		if (node1 == h->n && node > 0)
			break;
		if (node1 == h->n)
			node++;
		b++;
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
	}
	printf("-> [%p] %d\n", (void *)h, h->n);
	return (b);
}
/**
 * print_no_loop - print linked list
 * if no loop inside
 * @h: head of linked list
 * Return: number of nodes or 0
 */
size_t print_no_loop(const listint_t *h)
{
	int b = 0;

	while (h->next)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		b++;
		h = h->next;
	}
	b++;
	printf("[%p] %d\n", (void *)h, h->n);
	return (b);
}
