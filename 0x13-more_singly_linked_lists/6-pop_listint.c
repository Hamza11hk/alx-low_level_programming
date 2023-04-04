#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head pointer of the linked list
 * Return: deleted head node's data
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *quick;

	if (head == NULL || *head == NULL)

		return (n);

	quick = *head;
	n = quick->n;
	*head = quick->next;

	free(quick);
	quick = NULL;

	return (n);
}
