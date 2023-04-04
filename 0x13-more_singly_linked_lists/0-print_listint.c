#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t ct = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		ct++;
		node = node->next;
	}

	return (ct);
}
