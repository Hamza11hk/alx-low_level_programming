#include "lists.h"
/**
 * add_nodeint - add new node to the beginning of a lnked list
 * @head: head pointer of linked list
 * @n: add to new node
 * Return: address od new elemnts or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn = NULL;

	if (head == NULL)
		return (NULL);

	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->next = *head;
	*head = nn;

	return (nn);
}
