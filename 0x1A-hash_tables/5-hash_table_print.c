#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table.
  * @ht: hash table
  *
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tp;
	unsigned long int i = 0;
	int f = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			tp = ht->array[i];
			while (tp != NULL)
			{
				if (f == 0)
					f = 1;
				else
					printf(", ");

				printf("'%s': '%s'", tp->key, tp->value);
				tp = tp->next;
			}
		}
		printf("}\n");
	}
}
