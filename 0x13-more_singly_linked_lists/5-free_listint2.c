#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *c, *next;

	if (head == NULL)

		return;

	c = *head;

	while (c != NULL)
	{
		next = c->next;
		free(c);
		c = next;
	}

	*head = NULL;
}
