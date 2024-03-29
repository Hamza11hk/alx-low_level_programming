#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: pointer to head pointer of linked list
 * @index: to delete node
 * Return: 1 if succeeded, or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pv = NULL , *ct = *head;
	unsigned int i = 0;

	if (*head == NULL)

		return (-1);

	if (index == 0)
	{
		*head = ct->next;
		free(ct);

		return (1);
	}

	while (i < index && ct != NULL)

	{
		pv = ct;
		ct = ct->next;
		i++;
	}

	if (pv == NULL || ct == NULL)

		return (-1);

	pv->next = ct->next;
	free(ct);

	return (1);
}
