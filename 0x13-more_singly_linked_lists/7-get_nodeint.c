#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head:to the head node of the linked list.
 * @index:  the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n;
	unsigned int x;

	if (head == NULL)

		return (NULL);

	n = head;
	for (x = 0; x < index; x++)

	{
		if (n == NULL)

			return (NULL);

		n = n->next;
	}

	return (n);
}
