#include "lists.h"
/**
 * reverse_listint - reverse linked list
 * @head: pointer to head pointer of linked list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pv, *next;

	if (head == NULL || *head == NULL)

		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = pv;
		pv = *head;
		*head = next;
	}

	*head = pv;

	return (*head);
}
