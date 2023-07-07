#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table.
  * @size: size of the array.
  *
  * Return: pointer to newly created hash table.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_t;
	unsigned long int i;

	/* create a table size of the struct for table */
	n_t = malloc(sizeof(hash_table_t));
	if (n_t == NULL || size == 0)
		return (NULL);

	/* create an array of size size array is a member of struct table */
	n_t->array = malloc(sizeof(void *) * size);
	if (n_t->array == NULL)
		return (NULL);

	n_t->size = size;

	/* initialize the array to null */
	for (i = 0; i < size; i++)
		n_t->array[i] = NULL;

	return (n_t);
}
