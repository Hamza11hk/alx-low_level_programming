#include "hash_tables.h"

/**
  * hash_table_delete - deletes a hash table.
  * @ht: hash table to be deleted.
  *
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tp, *tp2;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tp = ht->array[i];
		while (tp != NULL)
		{
			tp2 = tp->next;
			free(tp->key);
			free(tp->value);
			free(tp);
			tp = tp2;
		}
	}
	free(ht->array);
	free(ht);
}
