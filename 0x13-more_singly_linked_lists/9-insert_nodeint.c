#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: pointer to a pointer to the head of the list
 * @idx: the index at which to insert the new node
 * @n: the value to store in the new node
 * Return: pointer to the new node if successful, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nn, *quick;
	unsigned int i;

	if (head == NULL)

		return (NULL);

	nn = malloc(sizeof(listint_t));
	if (nn == NULL)

		return (NULL);

	nn->n = n;

	if (idx == 0 || *head == NULL)
	{
		nn->next = *head;
		*head = nn;

		return (nn);
	}

	quick = *head;
	for (i = 0; i < idx - 1 && quick != NULL; i++)
		quick = quick->next;

	if (quick == NULL)
	{
		free(nn);

		return (NULL);
	}

	nn->next = quick->next;
	quick->next = nn;

	return (nn);
}
