#include "lists.h"

/**
 * dlistint_len - prints number of nodes
 * @h: head of node
 * Return: how many nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num += 1;
	}

	return (num);
}
