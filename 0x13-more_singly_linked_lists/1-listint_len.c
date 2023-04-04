#include "lists.h"
/**
 * listint_len - return the numbers of elements in a linked list
 * @h: list
 * Return: numbber of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t nn;

	for (nn = 0; h != NULL; nn++)
	{
		h = h->next;
	}

	return (nn);
}
