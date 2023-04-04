#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: head pointer of linked list
 * @n: data to add to new node
 * Return: address of new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (*head == NULL)
	{
		listint_t *nn = malloc(sizeof(listint_t));

		if (nn == NULL)
		{
			return (NULL);
		}
		nn->n = n;
		nn->next = NULL;
		*head = nn;
		return (nn);
	}

	if ((*head)->next == NULL)
	{
		listint_t *nn = malloc(sizeof(listint_t));

		if (nn == NULL)
		{
			return (NULL);
		}
		nn->n = n;
		nn->next = NULL;
		(*head)->next = nn;

		return (nn);
	}

	return (add_nodeint_end(&((*head)->next), n));
}
