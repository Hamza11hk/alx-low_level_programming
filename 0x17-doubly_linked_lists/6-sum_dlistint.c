#include "lists.h"

/**
 * sum_dlistint - get sum of data in doubly linked list
 * @head: pointer to head of doubly linked list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (!head)
		return (s);

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
