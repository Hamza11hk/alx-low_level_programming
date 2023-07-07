#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key.
  * @ht: hash table to be looked into.
  * @key: key being looked for.
  *
  * Return: value or Null if not found.
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tp;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	tp = ht->array[i];

	while (tp != NULL)
	{
		if (strcmp(key, tp->key) == 0)
			return (tp->value);
		tp = tp->next;
	}

	return (NULL);
}
