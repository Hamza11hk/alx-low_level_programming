#include "lists.h"
/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: pointer to head pointer of linked list
 * Return: sum or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *ct_n = head;

	while (ct_n)
	{
		s += ct_n->n;
		ct_n = ct_n->next;
	}

	return (s);
}
